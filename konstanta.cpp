#include <stdio.h>

#define K 1000						//konstanta didefinisikan sebagai nilai tetap, saya mengambil konstanta dalam geografi sebagai referensi
int main()
{
	float penduduk = 9450000;
	float kelahiran = 813200;
	float angka_kelahiran_kasar = penduduk / kelahiran * K;
	printf("Angka kelahiran kasar di suatu negara A adalah %.3f jiwa", angka_kelahiran_kasar);

	return 0;
	

}