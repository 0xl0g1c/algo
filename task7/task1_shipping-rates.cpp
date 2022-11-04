/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Friday, Nov 4, 2022
*/

// ref link: https://titipbeliin.com/blog/cek-ongkir-dakota-cargo/
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#define nl "\n"

#ifdef _WIN32
#define clr "cls"
#else //In any other OS
#define clr "clear"
#endif

using namespace std;

int main(int argc, char *argv[]) {
	/* Biaya Ongkir di 10 Kota Besar:
		1.) Jakarta 	(29.000) -> 1.450
		2.) Semarang	(68.000) -> 3.400
		3.) Bekasi		(53.000) -> 2.650
		4.) Bandung		(24.000) -> 2.900
		5.) Malang		(57.000) -> 2.850
		6.) Yogyakarta	(41.000) -> 2.050
		7.) Subang		(52.000) -> 2.600
		8.) Surabaya	(54.000) -> 2.700
		9.) Denpasar	(67.000) -> 3.350
		10.) Salatiga	(44.000) -> 2.200
	*/
	int to, // destination
	p, l, t; // weight dimension
	
	long long total = 0;
	float weight = 0;
	
	while(1) {
		char next;
		
		cout << "===== [CEK ONGKIR DAKOTA CARGO] =====" << nl;
		cout << "List Kota yang Tersedia:" << nl;
		cout << "1.) Jakarta" << nl;
		cout << "2.) Semarang" << nl;
		cout << "3.) Bekasi" << nl;
		cout << "4.) Bandung" << nl;
		cout << "5.) Malang" << nl;
		cout << "6.) Yogyakarta" << nl;
		cout << "7.) Subang" << nl;
		cout << "8.) Surabaya" << nl;
		cout << "9.) Denpasar" << nl;
		cout << "10.) Salatiga" << nl;
		
		cout << "Pilih kota tujuan (1-10): "; cin >> to;
		if(to < 1 && to > 10) {
			cout << nl;
			cerr << "!! Kota Tujuan sedang Tidak Tersedia !!" << nl;
			goto REPEAT;
		}
		else {
			cout << "Input panjang box : "; cin >> p;
			cout << "Input lebar box : "; cin >> l;
			cout << "Input tinggi box : "; cin >> t;
			weight = (p * l * t) / 4000;
		}
		
		switch(to) {
			case 1: // Jakarta
				if(weight <= 20) {
					total += 29000;
				}
				else {
					total = 29000 + (1450 * (weight-20));
				}
				break;
				
			case 2: // Semarang
				if(weight <= 20) {
					total += 68000;
				}
				else {
					total = 68000 + (3400 * (weight-20));
				}
				break;
			
			case 3: // Bekasi
				if(weight <= 20) {
					total += 53000;
				}
				else {
					total = 53000 + (2650 * (weight-20));
				}
				break;
			
			case 4: // Bandung
				if(weight <= 20) {
					total += 24000;
				}
				else {
					total = 24000 + (2900 * (weight-20));
				}
				break;
			
			case 5: // Malang
				if(weight <= 20) {
					total += 57000;
				}
				else {
					total = 57000 + (2850 * (weight-20));
				}
				break;
				
			case 6: // Yogyakarta
				if(weight <= 20) {
					total += 41000;
				}
				else {
					total = 41000 + (2050 * (weight-20));
				}
				break;
				
			case 7: // Subang
				if(weight <= 20) {
					total += 52000;
				}
				else {
					total = 52000 + (2600 * (weight-20));
				}
				break;
			
			case 8: // Surabaya
				if(weight <= 20) {
					total += 54000;
				}
				else {
					total = 54000 + (2700 * (weight-20));
				}
				break;
				
			case 9: // Denpasar
				if(weight <= 20) {
					total += 67000;
				}
				else {
					total = 67000 + (3350 * (weight-20));
				}
				break;
			
			case 10: // Salatiga
				if(weight <= 20) {
					total += 44000;
				}
				else {
					total = 44000 + (2200 * (weight-20));
				}
				break;
		}
		
		cout << nl;
		cout << "-------------------------------------" << nl;
		cout << "Total berat barang\t: " << weight << " kg" << nl;
		cout << "Tarif pengiriman\t: " << "Rp" << total << nl;
		cout << "-------------------------------------" << nl;
		
		REPEAT:
			cout << nl;
			cout << "Ulangi? (y/n): "; cin >> next;
			tolower(next);
			if(next == 'n' || (next != 'y' && next != 'n')) {
				break;
			}
			else {
				system(clr);
			}
	}
	
	getch();
	return 0;
}
