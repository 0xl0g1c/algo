/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Nov 27, 2022
*/

#include <iostream>
#include <cstdlib>
#define nl "\n" // Macro untuk mendeklarasikan baris baru ("\n") sebagai 'nl'

// Macro untuk mengontrol pembersihan (clear screen) terminal
#ifdef __WIN32 // jika OS-nya Windows
	#define clr "cls" // maka, gunakan perintah 'cls'
#else // selain OS Windows (include: Linux, Mac, dll)
	#define clr "clear" // maka, gunakan perintah 'clear'
#endif // penutup macro if

using namespace std;

void cetakArray2D(char arr[3][5]) { // fungsi no. 1 (mencetak array 3x5)
	cout << nl;
	cout << "Isi array:" << nl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 5; j++) {
			cout << arr[i][j] << " "; // Mencetak nilai kolom j tiap baris i
		}
		cout << nl; // setelah looping kolom j selesai, berikan baris baru
	}

	return;
}

void penjumlahanBarisDanKolom(int arr[3][3]) { // fungsi no. 2 (penjumlahan baris dan kolom array 3x3)
	int jumlahBaris1 = 0, jumlahBaris2 = 0, jumlahBaris3 = 0, jumlahKolom = 0;
	
	cout << nl;
	cout << "Isi array:" << nl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(i == 0) { // jika baris 1 / baris ke-0
				jumlahBaris1 += arr[0][j]; // maka, nilai tiap kolom ditambahkan ke variabel jumlahBaris1
			}
			else if(i == 1) { // jika baris 2 / baris ke-1
				jumlahBaris2 += arr[1][j]; // maka, nilai tiap kolom ditambahkan ke variabel jumlahBaris2
			}
			else if(i == 2) { // jika baris 3 / baris ke-2
				jumlahBaris3 += arr[2][j]; // maka, nilai tiap kolom ditambahkan ke variabel jumlahBaris3
			}
			cout << arr[i][j] << " "; // Mencetak nilai kolom j tiap baris i
		}
		cout << nl; // setelah looping kolom j selesai, berikan baris baru
	}
	jumlahKolom = jumlahBaris1 + jumlahBaris2 + jumlahBaris3; // jumlah kolom = hasil penjumlahan dari ke-3 total baris

	cout << nl;
	cout << "--------------------------" << nl;
	cout << "Jumlah baris 1: " << jumlahBaris1 << nl;
	cout << "Jumlah baris 2: " << jumlahBaris2 << nl;
	cout << "Jumlah baris 3: " << jumlahBaris3 << nl;
	cout << "Jumlah kolom  : " << jumlahKolom << nl;
	cout << "--------------------------" << nl;
	
	return;
}

void cetakArrayDinamis(int baris, int kolom) { // fungsi no. 3 (membuat dan mencetak array dinamis)
	string arr[baris][kolom]; // array kosong dengan tipe string
	// Tipe string digunakan supaya masukan dapat bernilai huruf atau pun angka
	
	cout << nl;
	// Memasukan nilai ke array sesuai dengan jumlah baris dan kolom
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << "Masukan nilai [" << i << "][" << j << "]: ";
			cin >> arr[i][j]; // Memasukan nilai input 'kolom' (j) tiap 'baris' (i)
		}
	}
	
	// Mencetak array dinamis yang telah diisi nilai
	cout << nl;
	cout << "Isi array:" << nl;
	for(int i = 0; i < baris; i++) {
		for(int j = 0; j < kolom; j++) {
			cout << arr[i][j] << " "; // Mencetak nilai kolom j tiap baris i
		}
		cout << nl; // setelah looping kolom j selesai, berikan baris baru
	}
	
	return;
}

int main(int argc, char* argv[]) {
	/*
	 * Tugas:
	 * 1. Mencetak array 2 dimensi (ukuran 3x5)
	 * 2. Menghitung penjumlahan 2 baris dan kolom array 2 dimensi (ukuran 3x3)
	 * 3. Membuat array dinamis
	*/
	
	int pilihan; // untuk menyimpan input pilihan
	char ulang = 'y'; // untuk menyimpan input ulang program

	do { // eksekusi program di bawah ...
		cout << "Masukan pilihan" << nl;
		cout << "1. Cetak array 2 dimensi (3x5)" << nl;
		cout << "2. Penjumlahan baris dan kolom array 2 dimensi (3x3)" << nl;
		cout << "3. Buat array dinamis" << nl;
		cout << "(1-3): "; cin >> pilihan;
		
		if(pilihan < 1 || pilihan > 3) { //jika input pilihan nomor tidak tepat
			cout << "-----------------------------" << nl;
			cerr << "Maaf, pilihan tidak tersedia!" << nl;
			cout << "-----------------------------" << nl;
		}
		else if(pilihan == 1) { // jika pilihan no. 1
			char arr[3][5] = { // array 2 dimensi (3x5)
				{'A', 'B', 'C', 'D', 'E'},
				{'F', 'G', 'H', 'I', 'J'},
				{'K', 'L', 'M', 'N', 'O'}
			};
			cetakArray2D(arr); // jalankan fungsi ini
		}
		else if(pilihan == 2) { // jika pilihan no. 2
			int arr[3][3] = {
				{12, 13, 14}, // baris 0: 39
				{15, 16, 17}, // baris 1: 48
				{18, 19, 20}  // baris 2: 57
			}; //jumlah kolom: 144
			penjumlahanBarisDanKolom(arr); // jalankan fungsi ini
		}
		else { // jika pilihan no. 3
			int jumlahBaris, jumlahKolom;
			
			cout << nl;
			cout << "Masukan jumlah baris: "; cin >> jumlahBaris;
			cout << "Masukan jumlah kolom: "; cin >> jumlahKolom;
			cetakArrayDinamis(jumlahBaris, jumlahKolom); // jalankan fungsi ini dengan 2 argumen
		}
		
		cout << nl;
		cout << "Ulangi program? (y/n): "; cin >> ulang; // menerima input ulangi program
		tolower(ulang); // mengubah input ulangi program menjadi lowercase (huruf kecil)
		if(ulang == 'y') { // jika input ulangi program bernilai y (yes)
			system(clr); // maka, clear screen
		}
		else { // jika input selain y (yes)
			cout << nl;
			cout << "Exited..." << nl;
			break; // maka, keluar dari program
		}
		
	} while(ulang == 'y'); // selama input ulang bernilai y (yes)
	
	return 0;
}
