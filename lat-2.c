#include <stdio.h>

void swap1 (int x, int y); /* prototype */
void swap2 (int *x, int *y); /* prototype */

int main () {
	int i, j;

	i = 3; j = 15;

	printf("i dan j sebelum ditukar : i = %d, j = %d\n", i, j);
	
	swap1(i, j);
	printf("i dan j setelah memanggil swap1 : i = %d, j = %d\n", i, j);
	
	swap2(&i, &j);
	printf("i dan j setelah memanggil swap2 : i = %d, j = %d\n", i, j);

	return 0;
}

void swap1(int x, int y) {
	int temp;
	temp = x;

	x = y;
	y = temp;

	printf("Nilai variabel pertama = %d\n", x);
	printf("Nilai variabel kedua = %d\n", y);
}

void swap2 (int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
