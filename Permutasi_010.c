#include <stdio.h>

int factorial (int f) {
	if (f == 1 || f == 0) {
		return 1;
	}

	else {
		return (f * factorial (f - 1));
	}
}

int permutasi (int n, int k) {
	int hasil;

	hasil = factorial(n) / factorial(n - k);

	return hasil;
}


int main () {
	int n, k;

	printf("Masukkan bilangan yang akan dilakukan permutasi : ");
	scanf("%d", &n);
	printf("Masukkan susunan yang akan diberikan : ");
	scanf("%d", &k);

	printf("Hasil faktorial : %d", permutasi(n, k));

	return 0;
}
