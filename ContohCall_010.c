/*
	Apa perbedaan kedua prosedur penukaran di atas? Apa yang terjadi dengan variabel i dan j , 
	baik di dalam prosedur maupun setelah prosedur tersebut dipanggil?

	Jawaban :
	
	Perbedaan dari kedua prosedur penukaran tersebut adalah metode penukarannya. 
		* Pada swap1, nilai dari i dan j ditukar dengan cara mengganti nilai i menjadi j pada
		  lokasi data tersebut di dalam memori yang sudah dialokasikan untuk i. Demikian juga 
		  dengan nilai j yang diganti menjadi nilai i pada lokasi data j tersebut pada memori.
		  	--> nilai i menjadi nilai j (lokasi data i dalam memori tetap).
			--> nilai j menjadi nilai i (lokasi data j dalam memori tetap).

		* Pada swap2, nilai dari i dan j tetap. Namun yang terjadi pada swap2 adalah mereka
		  bertukar tempat dalam memori. Yang bertukar dalam memori adalah alamat datanya,
		  bukan nilainya.
		 	--> lokasi data i ditukar dengan j (nilai i dan j sebenarnya tetap. Namun yang
				dipanggil adalah alamatnya dalam menghasilkan output pada swap2.) 

	
	Yang terjadi pada variabel i dan j.
		* Swap 1
		  Pada swap1 nilai dari i dan j diubah pada lokasi data mereka pada memori. Tanpa menukar
		  lokasi data mereka dalam memori. Misalkan lokasi i dalam memori adalah A dan lokasi j dalam
		  memori adalah B.

		  Dalam hal ini, program membaca dari kiri terlebih dahulu
		  lalu membaca kertas kanan.

			Lokasi Memori	  	A       B           A        B
		  	   		   		   (i)     (j)   --->  (j)      (i)
		                		^                   ^
		     	        		|                   |
		         		output pertama        output pertama

		* Swap 2
		  Pada swap2, nilai i dan j tetap dan tidak berubah. Tetap tertulis pada lokasi memori masing-masing.
		  Yang bertukar adalah lokasi data mereka dalam memori. Misal lokasi i dalam memori adalah A dan
		  lokasi j dalam memori adalah B.

		  Lokasi memori                A           B                B            A
		                              (i)         (j)   ------->   (j)          (i)
									   ^                            ^
									   |                            |
							    output pertama                 output pertama
*/

#include <stdio.h>

void swap1 (int x, int y); //prototype
void swap2 (int *x, int *y); //prototype

int main () {
	int i, j;

	i = 3, j = 15;

	printf("i dan j sebelum ditukar : i = %d, j = %d\n", i, j);

	swap1(i,j);
	printf("i dan j setelah memanggil swap1 : i = %d, j = %d\n", i, j);

	swap2(&i, &j);
	printf("i dan j setelah memanggil swap2 : i = %d, j = %d\n", i, j);
	
	return 0;
}

void swap1(int x, int y) {
	int temp;
	temp  = x;

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
