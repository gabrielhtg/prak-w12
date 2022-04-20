#include <stdio.h>

int factorial (int n); //prototype

int main () {
	int n, fak;

	printf("Masukkan sebuah bilangan bulat > 1 : ");
	scanf("%d", &n);

	fak = factorial (n);
	printf("Nilai dari %d adalah %d\n", n, fak);

	return 0;
}

int factorial (int n) {
	if (n == 1)
		return (1);  //bagian basis
	
	else
		return (n * factorial (n - 1)); //bagian rekursif
	
}
