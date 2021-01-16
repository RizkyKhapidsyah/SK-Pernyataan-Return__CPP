/* Pernyataan Return pd Fungsi */
#include <iostream>
#include <conio.h>

using namespace std;

float luas(int r) { //fungsi luas lingkaran 
	return(3.14 * r * r);
}

float kel(int r) { //fungsi kel lingkaran
	return(3.14 * 2 * r);
}

int main() {
	int j;
	
	cout << "Masukkan Jari-jari = "; cin >> j;
	cout << "Luas lingkaran = " << luas(j) << endl;
	cout << "Keliling lingkaran = " << kel(j);

	_getch();
	return 0;
}