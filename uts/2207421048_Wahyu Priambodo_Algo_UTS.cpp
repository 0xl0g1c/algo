#include <iostream>
#include <cstdlib> // header to get "system" function
#define nl "\n" // macro definition for new line "\n"

/* HANDLE CLEAR SCREEN TERMINAL */
#ifdef _WIN32
	#define clr "cls"
#else //Selain OS Windows, maka pakai perintah "clear"
	#define clr "clear"
#endif

using namespace std;

int main(int argc, char* argv[]) {
	/* INISIALISASI VARIABEL */
	int ans; // var untuk input no. soal
	char next; // var untuk menampung nilai inputan lanjut ulangi program/tidak

	/* PROSES */
	do { // Menjalankan proses ...
		cout << "Masukan nomor soal (1/2): "; cin >> ans; // input no pertanyaan
		cout << nl;
		
		switch(ans) { // Mengatur kondisi alur soal no. 1 dan 2
			case 1: // soal no. 1
			{
				/* INISIALISASI VARIABEL */
				unsigned int day, pax; // var untuk menampung nilai inputan kunjungan hari dan banyak orang yang ikut
				bool ok = 0; // var untuk menandai proses apakah kondisinya salah/benar
				unsigned long long total1 = 0; // var untuk menampung total harga tiket
				
				/* PROSES */
				cout << "===== [PROGRAM BEHIND THE SCENE TOUR VVIP] =====" << nl;
				
				// Menampilkan list hari kunjungan
				cout << nl;
				cout << "Hari Kunjungan:" << nl;
				cout << "1. Senin" << nl;
				cout << "2. Selasa" << nl;
				cout << "3. Rabu" << nl;
				cout << "4. Kamis" << nl;
				cout << "5. Jumat" << nl;
				cout << "Masukan hari kunjungan (1-5): "; cin >> day; // input hari kunjungan
				if(day > 5) {
					ok  = 0; // tanda kondisi False
				}
				else {
					cout << "Beli untuk berapa pax?: "; cin >> pax; 
					if(pax < 5 || pax > 15) {
						ok = 0; // tanda kondisi False
					}
					else {
						ok = 1; // tanda kondisi True
						total1 += 1000000 * pax; // total bayar = 1 juta * banyak orang yg ikut
					}
				}
				
				/* OUTPUT */
				if(!ok) { // Jika tanda kondisinya False
					cout << "---------------------------------------------" << nl;
					cerr << "Maaf, Anda tidak dapat mengikuti program ini!" << nl; // Menampilkan pesan kesalahan
					cout << "---------------------------------------------" << nl;
					goto REPEAT; // Pergi ke REPEAT statement
				}
				else { // jika tanda kondisinya True
					cout << "------------------------------------------" << nl;
					cout << "Selamat, Anda dapat mengikuti program ini!" << nl; // Menampilkan pesan sukses
					cout << "Total bayar: Rp" << total1 << nl; // Menampilkan total bayar
					cout << "------------------------------------------" << nl;
					goto REPEAT; // Pergi ke REPEAT statement
				}
				break; // end case 1
			}
			case 2: // soal no. 2
			{
				/* INISIALISASI */
				unsigned int choice, age, many; // var untuk menampung inputan pilihan tiket, umur, dan banyak tiket yang dibeli
				unsigned long long total2 = 0; // var untuk menampung total harga tiket
				
				/* PROSES */
				cout << "===== [PROGRAM TIKET SAFARI MALAM] =====" << nl;
				
				// Menampilkan list tiket yang tersedia
				cout << nl;
				cout << "Pilihan Tiket: " << nl;
				cout << "1. Domestic" << nl;
				cout << "2. Internasional" << nl;
				cout << "Masukan pilihan tiket (1/2): "; cin >> choice; // input pilihan tiket yang ingin dibeli
				switch(choice) {
					case 1: // domestic
					{
						cout << "Masukkan umur Anda: "; cin >> age; // Input umur
						cout << "Beli berapa tiket?: "; cin >> many; // Input jumlah tiket yang dibeli
						if(age <= 6) { // umur < 5
							total2 += (160000 * many); // domestic: total = 160 ribu * jumlah tiket yang dibeli
						}
						else if(age >= 7) { // umur > 6
							total2 += (180000 * many); // domestic: total = 180 ribu * jumlah tiket yang dibeli
						}
						break; // end of case 1 (domestic ticket)
					}
					case 2: // international
					{	
						cout << "Masukkan umur Anda: "; cin >> age; // Input umur
						cout << "Beli berapa tiket?: "; cin >> many; // Input jumlah tiket yang dibeli
						if(age <= 6) { // umur < 5
							total2 += (350000 * many); // internationl: total = 350 ribu * jumlah tiket yang dibeli
						}
						else if(age >= 7) { // umur > 6
							total2 += (300000 * many); // international: total = 300 ribu * jumlah tiket yang dibeli
						}
						break; // end of case 2 (international ticket)
					}
					default:
					{
						cout << "---------------------------------------" << nl;
						cerr << "Maaf, hanya terdapat dua pilihan tiket!" << nl; // Menampilkan pesan kesalahan
						cout << "---------------------------------------" << nl;
						goto REPEAT; // Pergi ke REPEAT statement
					}
				}
				
				/* OUTPUT */
				cout << nl;
				cout << "-----------------------------------" << nl;
				cout << "Total harga tiket: Rp" << total2 << nl;
				cout << "-----------------------------------" << nl;
				goto REPEAT; // Pergi ke REPEAT statement
				break;
		}
		default: // selain input 1 | 2, maka error
		{
			cout << "------------------------------" << nl;
			cerr << "Maaf, hanya terdapat dua soal!" << nl; // Menampilkan pesan kesalahan
			cout << "------------------------------" << nl;
			goto REPEAT; // Pergi ke REPEAT statement
		}
		
		/* KONDISI ULANGI PROGRAM (REPEAT STATEMENT) */
		REPEAT:
			cout << nl;
			cout << "Ulangi? (y/n): "; cin >> next; // Input untuk mengulangi program
			if(next == 'y' || next == 'Y') { // Mengulang (yes)
				system(clr); // Tambahan clear terminal jika mengulang
			}
			else { // Tidak mengulang (no)
				cout << nl;
				cout << "Exited..."; // Menampilkan pesan keluar
				break; // Jika tidak mengulang, maka program berhenti (break).
			}
		}
	} while(next == 'y' || next == 'Y'); // ... Selama inputnya lanjut (yes)
	
	return 0; // Return function
}
