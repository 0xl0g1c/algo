/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Nov 20, 2022
*/

#include <iostream> // i.o header file
#include <cstdlib> // menggunakan fungsi system
#define ull unsigned long long // macro untuk mengaliaskan tipe unsigned long long sebagai ull
#define nl "\n" // macro untuk mendefinisikan nl sebagai "\n" atau new line

// macro untuk melakukan clear screen pada terminal dengan spesifik OS
#ifdef _WIN32 // jika OS Windows
	#define clr "cls" // menggunakan perintah 'cls'
#else // Selain OS Windows
	#define clr "clear" // menggunakan perintah 'clear'
#endif

using namespace std;

bool ok = 0; // untuk menandakan kalau logic tidak tepat (error)
ull total = 0; // untuk mengkalkulasi keseluruhan biaya tiket tiap wahana

char is_exist; // untuk menampung input pilihan tiket balita (no. 2 & 4)
string choice = ""; // untuk menyimpan nilai pilihan tiket domestik/internasional (no. 2 & 4)

// tanda logic benar (ok == 1)
// tanda logic salah (ok == 0)

// Fungsi untuk mengetahui hari berdasarkan nilai input harinya (no. 1 & 3)
string checkDays(const int inputDay) {
	string day = "";
	if(inputDay == 1) {
		day = "Senin";
	}
	else if(inputDay == 2) {
		day = "Selasa";
	}
	else if(inputDay == 3) {
		day = "Rabu";
	}
	else if(inputDay == 4) {
		day = "Kamis";
	}
	else if(inputDay == 5) {
		day = "Jumat";
	}
	else if(inputDay == 6) {
		day = "Sabtu";
	}
	else if(inputDay == 7) {
		day = "Minggu";
	}
	else {
		day = "Hari libur";
	}
		
	return day;
}

void ticket1() { // no. 1
	int day, n; // untuk menampung input jumlah orang
	string errmsg = ""; // untuk menyimpan pesan kesalahan
	
	cout << nl;
	cout << "===== [Wahana Safari Trek & Outbound] =====" << nl;
	cout << "Masukan hari kunjungan" << nl;
	cout << "1. Senin\t2. Selasa\t3. Rabu" << nl;
	cout << "4. Kamis\t5. Jumat\t6. Sabtu" << nl;
	cout << "7. Minggu\t8. Hari Libur" << nl;
	cout << "(1-8): "; cin >> day; // input hari kunjungan
	
	if(day < 1 || day > 8) { // jika input tidak ada di dalam daftar hari kunjungan
		ok = 0;
		errmsg = "Maaf, terdapat kesalahan input!"; // akan menampilkan pesan ini
	}
	else { // jika input ada di dalam daftar hari kunjungan
		cout << "Masukan jumlah pembelian tiket: "; cin >> n; // input banyak pembelian tiket
		if(n < 25) { // jika min. reservasi < 25 orang
			ok = 0;
			errmsg = "Maaf, pembelian tiket kurang!"; // akan menampilkan pesan ini
		}
		else { // jika reservasi >= 25
			ok = 1;
			total = (150000 * n);
		}
	}
	
	cout << nl;
	if(!(ok)) { // jika penanda logic salah
		cout << "-------------------------------" << nl;
		cerr << errmsg << nl; // menampilkan pesan ini
		cout << "-------------------------------" << nl;
	}
	else { // jika penanda logic benar
		cout << "----------------------------------" << nl;
		cout << "Hari kunjungan: " << checkDays(day) << nl; // menampilkan hari kunjungan
		cout << "Jumlah pembelian tiket: " << n << " buah" << nl; // menampilkan jumlah pembelian tiket, dan
		cout << "=> Total harga tiket: Rp" << total << nl; // menampilkan total harga tiket (safari trek & outbond)
		cout << "----------------------------------" << nl;
	}
	
	return;
}

void ticket2() { // no. 2
	int day, type, n_age1, n_age2; // untuk menampung input pilihan hari, tiket, banyak tiket balita dan anak-dewasa
	
	cout << nl;
	cout << "===== [Wahana Taman Safari] =====" << nl;
	cout << "Masukan hari kunjungan Anda" << nl;
	cout << "1. Weekday\t2. Weekend & Holiday" << nl;
	cout << "(1/2): "; cin >> day; // input hari kunjungan
	
	cout << nl;
	switch(day) { // pemilihan hari kunjungan
		case 1: // hari kerja/weekdays (Senin-Jumat)
		{		
			cout << "Masukan pilihan tiket" << nl;
			cout << "1. Domestic\t2. International" << nl;
			cout << "(1/2): "; cin >> type; // input pilihan tiket (domestik atau internasional)
			
			if(type != 1 && type != 2) { // jika pilihan input tiket bukan 1 dan 2
				ok = 0;
			}
			else { // jika pilihan tiket antara 1 dan 2
				cout << "Apakah ada balita? (y/n): "; cin >> is_exist; // input ketersediaan balita

				if(is_exist != 'y' && is_exist != 'n') { // jika opsi tidak tepat
					ok = 0;
				}
				else if (is_exist == 'y') { // jika ada balita
					ok = 1;
					cout << "Masukan jumlah tiket balita (< 5 thn): "; cin >> n_age1; // input jumlah pembelian tiket balita
					cout << "Masukan jumlah tiket biasa (> 6 thn): "; cin >> n_age2; // input jumlah pembelian tiket anak-dewasa
				}
				else { // jika tidak ada balita (is_exist == 'n')
					ok = 1;
					// hanya memasukan jumlah tiket anak-dewasa (> 6 tahun)
					n_age1 = 0; // tidak ada balita
					cout << "Masukan jumlah tiket biasa (> 6 thn): "; cin >> n_age2; // hanya input (jumlah pembelian tiket anak-dewasa)
				}
			}
			
			switch(type) { // pemilihan tiket masuk
				case 1: // domestik
				{
					ok = 1;
					choice = "Domestik"; // sebagai pesan tambahan jika pilihan tiket 1
					total = (200000 * n_age1) + (230000 * n_age2);
					// total = (banyak tiket balita [domestik] * 200 ribu) + (banyak tiket anak-dewasa [domestik] * 230 ribu)
					
					break;
				}
				case 2: // internasional
				{
					ok = 1;
					choice = "Internasional"; // sebagai pesan tambahan jika pilihan tiket 2
					total = (350000 * n_age1) + (400000 * n_age2);
					// total = (banyak tiket balita [internasional] * 350 ribu) + (banyak tiket anak-dewasa [internasional] * 400 ribu)
					
					break;
				}
				default: // selain opsi domestik dan internasional
				{
					ok = 0;
					break;	
				}
			}
			
			break;
		}
		
		case 2: // hari libur/weekend (Sabtu - Minggu) & liburan
		{
			cout << "Masukan pilihan tiket" << nl;
			cout << "1. Domestic\t2. International" << nl;
			cout << "(1/2): "; cin >> type; // input pilihan tiket (domestik atau internasional)

			if(type != 1 && type != 2) { // jika input pilihan tiket bukan 1 dan 2
				ok = 0;
			}
			else { // jika input pilihan tiket antara 1 dan 2
				cout << "Apakah ada balita? (y/n): "; cin >> is_exist; // input ketersediaan balita (< 5 tahun)
			
				if(is_exist != 'y' && is_exist != 'n') { // jika opsi tidak tepat
					ok = 0;
				}
				else if (is_exist == 'y') { // jika ada balita
					ok = 1;
					cout << "Masukan jumlah tiket balita (< 5 thn): "; cin >> n_age1; // input jumlah balita
					cout << "Masukan jumlah tiket biasa (> 6 thn): "; cin >> n_age2; // input jumlah anak-anak sampai dewasa
				}
				else { // jika tidak ada balita (is_exist == 'n')
					ok = 1;
					// hanya memasukan jumlah tiket biasa
					n_age1 = 0; // tidak ada balita
					cout << "Masukan jumlah tiket biasa (> 6 thn): "; cin >> n_age2; // hanya input (jumlah pembelian tiket anak- dewasa)
				}
			}

			switch(type) { // pemilihan tiket masuk
				case 1: // domestik
				{
					ok = 1;
					choice = "Domestik"; // sebagai pesan tambahan jika pilihan tiket 1
					total = (225000 * n_age1) + (255000 * n_age2);
					// total = (banyak tiket balita [domestik] * 225 ribu) + (banyak tiket anak-dewasa [domestik] * 255 ribu)
					
					break;
				}
				case 2: // internasional
				{
					ok = 1;
					choice = "Internasional"; // sebagai pesan tambahan jika pilihan tiket 2
					total = (350000 * n_age1) + (400000 * n_age2);
					// total = (banyak tiket balita [internasional] * 225 ribu) + (banyak tiket anak-dewasa [internasional] * 255 ribu)
					
					break;
				}
				default: // selain opsi domestik dan internasional
				{
					ok = 0;
					break;
				}
			}
			
			break;
		}
		default: // selain opsi 1 dan 2...
		{
			ok = 0;
			break;
		}
	}
	
	cout << nl;
	if(!(ok)) {
		cout << "-------------------------------" << nl;
		cerr << "Maaf, terdapat kesalahan input!" << nl; // menampilkan pesan ini
		cout << "-------------------------------" << nl;
	}
	else {
		cout << "--------------------------------------------" << nl;
		cout << "Pilihan tiket: " << choice << " (" << type << ")" << nl; // menampilkan tiket yg dipilih.
		cout << "Jumlah tiket balita (< 5 thn): " << n_age1 << nl; // menampilkan jumlah tiket balita yg dibeli,
		cout << "Jumlah tiket anak-dewasa (> 6 tahun): " << n_age2 << nl; // menampilkan jumlah tiket anak-dewasa yg dibeli, dan
		cout << "=> Total harga tiket: Rp" << total << nl; // menampilkan total harga tiket (safari journey)
		cout << "--------------------------------------------" << nl;
	}
	
	return;
}

void ticket3() { // no. 3
	int day, n; // untuk menampung input pilihan hari dan banyak pembelian tiket
	
	cout << nl;
	cout << "===== [Wahana Safari Behind the Scene Tour VVIP] =====" << nl;
	cout << "Masukan hari kunjungan" << nl;
	cout << "1. Senin\t2. Selasa\t3. Rabu" << nl;
	cout << "4. Kamis\t5. Jumat" << nl;
	cout << "(1-5): "; cin >> day; // input hari kunjungan
	
	if(day < 1 || day > 5) { // jika input hari kunjungan tidak tepat
		ok = 0;
	}
	else { // jika input hari kunjungan sesuai
		cout << "Masukan jumlah pembelian tiket?: "; cin >> n; // input banyak pembelian tiket masuk
		if(n < 5 || n > 15) { // jika tidak sesuai syarat (harus 5-15)
			ok = 0;
		}
		else { // jika memenuhi syarat
			ok = 1;
			total = (1000000 * n); // total = 1 juta (VVIP) * banyak orang yg ikut
		}
	}

	cout << nl;
	if(!(ok)) { // jika penanda logic salah (false)
		cout << "---------------------------------------------" << nl;
		cerr << "Maaf, Anda tidak dapat mengikuti program ini!" << nl; // menampilkan pesan ini
		cout << "---------------------------------------------" << nl;
	}
	else { // jika penanda logic benar (true)
		cout << "----------------------------------" << nl;
		cout << "Hari kunjungan: " << checkDays(day) << nl; // menampilkan hari kunjungan
		cout << "Jumlah pembelian tiket: " << n << nl; // menampilkan banyak pembelian tiket, dan
		cout << "=> Total harga tiket: Rp" << total << nl; // menampilkan total harga tiket (Behind The Scene Tour VVIP)
		cout << "----------------------------------" << nl;
	}
	
	return;
}

void ticket4() { // no. 4
	int type, n_age1, n_age2; // untuk menampung input pilihan tiket, banyak tiket balita (umur < 5 tahun) dan anak-dewasa (> 6 tahun)
	
	cout << nl;
	cout << "===== [Wahana Safari Malam Bogor] =====" << nl;
	cout << nl;
	cout << "Masukan pilihan tiket" << nl;
	cout << "1. Domestic\t2. Internasional" << nl;
	cout << "(1/2): "; cin >> type; // input pilihan tiket yang ingin dibeli
	
	switch(type) { // pemilihan tiket masuk
		case 1: // domestik
		{
			cout << "Apakah ada balita? (y/n): "; cin >> is_exist; // input ketersediaan balita (< 5 tahun)

			if(is_exist != 'y' && is_exist != 'n') { // jika opsi tidak tepat
				ok = 0;
			}
			else if (is_exist == 'y') { // jika ada balita
				ok = 1;
				cout << "Masukan jumlah tiket balita (< 5 thn): "; cin >> n_age1; // input jumlah pembelian tiket balita
				cout << "Masukan jumlah tiket biasa (> 6 thn): "; cin >> n_age2; // input jumlah pembelian tiket anak-dewasa
			}
			else { // jika tidak ada balita
				ok = 1;
				// hanya memasukan jumlah tiket anak-dewasa (> 6 tahun)
				n_age1 = 0; // tidak ada balita
				cout << "Masukan jumlah tiket biasa (> 6 thn): "; cin >> n_age2; // hanya input (jumlah pembelian tiket anak-dewasa)
			}
			
			choice = "Domestik"; // sebagai pesan tambahan jika pilihan tiket 1
			total = (160000 * n_age1) + (180000 * n_age2);
			// total = (banyak tiket balita [domestik] * 160 ribu) + (banyak tiket anak-dewasa [domestik] * 180 ribu)
			
			break; // end of case 1 (domestic ticket)
		}
		case 2: // internasional
		{
			cout << "Apakah ada balita? (y/n): "; cin >> is_exist; 

			if(is_exist != 'y' && is_exist != 'n') { // jika opsi tidak tepat
				ok = 0;
			}
			else if (is_exist == 'y') { // jika ada balita
				ok = 1;
				cout << "Masukan jumlah tiket balita (< 5 thn): "; cin >> n_age1; // input jumlah pembelian tiket balita (< 5 tahun)
				cout << "Masukan jumlah tiket biasa (> 6 thn): "; cin >> n_age2; // input jumlah pembelian tiket anak-dewasa (> 6 tahun)
			}
			else { // jika tidak ada balita
				ok = 1;
				// hanya memasukan jumlah tiket anak-dewasa
				n_age1 = 0; // tidak ada balita
				cout << "Masukan jumlah tiket biasa (> 6 thn): "; cin >> n_age2; // hanya input (jumlah pembelian tiket anak-dewasa)
			}
			
			choice = "Internasional";  // sebagai pesan tambahan jika pilihan tiket 1
			total = (300000 * n_age1) + (350000 * n_age2);
			// total = (banyak tiket balita [internasional] * 300 ribu) + (banyak tiket anak-dewasa [internasional] * 350 ribu)
			
			break; // end of case 2 (international ticket)
		}
		default:
		{
			ok = 0;
		}
	}
	
	cout << nl;
	if(!(ok)) { // jika penanda logic salah (false)
		cout << "-------------------------------" << nl;
		cerr << "Maaf, terdapat kesalahan input!" << nl; // menampilkan pesan ini
		cout << "-------------------------------" << nl;
	}
	else { // jika penanda logic benar (true)
		cout << "---------------------------------------------" << nl;
		cout << "Pilihan tiket: " << choice << " (" << type << ")" << nl; // menampilkan pilihan tiket,
		cout << "Jumlah tiket balita (< 5 tahun): " << n_age1 << nl; // menampilkan banyak pembelian tiket balita,
		cout << "Jumlah tiket anak-dewasa (> 6 tahun): " << n_age2 << nl; // menampilkan banyak pembelian tiket anak-dewasa
		cout << "=> Total harga tiket: Rp" << total << nl; // menampilkan total harga tiket (safari malam bogor)
		cout << "---------------------------------------------" << nl;
	}
	
	return;
}

int main() {
	int choice; // menampung input pilihan wahana (tempat rekreasi)
	char repeat = 'y'; // deklarasi variabel perulangan
	
	do { // jalankan kode berikut, selama ...
		cout << "Masukan pilihan tiket" << nl;
		cout << "1. Tiket Safari Trek & Outbound\t\t\t2. Tiket Safari Standar" << nl;
		cout << "3. Tiket Safari Behind The Scene Tour VVIP\t4. Tiket Safari Malam Bogor" << nl;
		cout << "(1-4): "; cin >> choice; // input pilihan wahana
		
		if(choice == 1) { // jika pilihan wahana 1 (safari trek & outbound)
			ticket1(); // jalankan fungsi area1();
		}
		else if(choice == 2) { // jika pilihan wahana 2 (safari journey)
			ticket2(); // jalankan fungsi area2();
		}
		else if(choice == 3) { // jika pilihan wahana 3 (behind the scene tour VVIP)
			ticket3(); // jalankan fungsi area3();
		}
		else if(choice == 4) { // jika pilihan wahana 4 (safari malam Bogor)
			ticket4(); // jalankan fungsi area4();
		}
		else { // jika pilihan wahana tidak tersedia
			cout << "-----------------------------------" << nl;
			cerr << "Maaf, tempat wahana tidak tersedia!" << nl; // menampilkan pesan ini
			cout << "-----------------------------------" << nl;
		}
		
		cout << nl;
		cout << "Ulangi program? (y/n): "; cin >> repeat; // input untuk pengulangan eksekusi program dari awal
		if(repeat == 'n' || (repeat != 'y' && repeat != 'n')) { // jika tidak ulang atau terdapat kesalahan input
			cout << nl;
			cout << "Exited..." << nl; // menampilkan pesan keluar
			break; // keluar dari loop dan program selesai
		}
		else { // jika input selain 'n' (no), berarti 'y' (yes) atau mengulang
			system(clr); // clear terminal
		}
		
	} while(repeat == 'y'); // input variabel perulangan selalu bernilai 'y' (yes)
	
	return 0;
}
