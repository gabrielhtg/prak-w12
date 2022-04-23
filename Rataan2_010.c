#include <stdio.h>

int main () {
	double x, y;
	int n = 0;

	while (x != -999) {
		printf("Masukkan angkanya : ");
		scanf("%lf", &x);

		if (x != - 999) {
			y = y + x;
			n++;

			printf("Banyak bilangan : %d\nJumlah bilangan : %0.0lf\nRata-rata : %0.1lf\n\n", n, y, y / n);
		}

		else if (x == -999 && n == 0) {
			printf("Banyak bilangan : %d\nJumlah bilangan : %0.0lf\nRata-rata : %0.0lf\n\n", n, y, y / 1);
		}

		else {
			printf("Banyak bilangan : %d\nJumlah bilangan : %0.0lf\nRata-rata : %0.1lf\n\n", n, y, y / n);
		}
	}
	
	return 0;
}
