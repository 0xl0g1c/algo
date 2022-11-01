/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Tuesday, Nov 1, 2022
*/

#include <iostream>
#include <conio.h> // to use getch function
#include <cstdlib> // to use system function
#define nl "\n" // alias for new line

#ifdef _WIN32
#define clr "cls"
#else //In any other OS
#define clr "clear"
#endif

using namespace std;

int main(int argc, char *argv[])
{
	int day_visited, choice, many, vehicle_type; // hari kunjungan, pilihan menu, banyak tiket yang dibeli, jenis kendaraan
	char use_vehicle; // pakai kendaraan | tidak
	
	bool is_use_vehicle=0;
	int total_price=0;
	
	while(1)
	{
		char next;
		cout << "===== [MENGHITUNG PEMBELIAN TIKET DUFAN] =====" << nl;
		
		cout << "Anda berkunjung hari apa?" << nl;
		cout << "1. Weekday (Senin-Jumat)" << nl;
		cout << "2. Weekend (Sabtu & Minggu) & Hari Libur" << nl;
		cout << "(1/2): "; cin >> day_visited;
		
		cout << nl;
		cout << "Anda menggunakan kendaraan? (y/n): "; cin >> use_vehicle;
		tolower(use_vehicle);
		if(use_vehicle != 'y' && use_vehicle != 'n')
		{
			goto REPEAT;
		}
		else if(use_vehicle == 'y')
		{
			is_use_vehicle = 1;
			cout << "Jenis kendaraan?" << nl;
			cout << "1. Mobil" << nl;
			cout << "2. Motor" << nl;
			cout << "(1/2): "; cin >> vehicle_type;
		}
		else
		{
			is_use_vehicle = 0; // not use vehicle
		}
		
		switch(vehicle_type)
		{
			case 1:
				total_price += 25000;
				break;
			case 2:
				total_price += 15000;
				break;
		}
		
		switch(day_visited)
		{
			case 1:
				cout << nl;
				cout << "--- [Menu Pilihan Tiket] ---" << nl;
				cout << "1. Annual Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp350.000" << nl;
				cout << "2. Six Months Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp295.000" << nl;
				cout << "3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. pembelian 4 Tiket, berlaku kelipatan) = Rp185.000" << nl;
				cout << "4. Weekday Dufan + Ancol = Rp250.000" << nl;
				cout << "5. Six Months Pass Dufan (Ecard) + 1 x kunjungan reguler Ancol + Weekday Gondola = Rp333.000" << nl;
				cout << "(1-5): "; cin >> choice;
				
				if(choice < 1 && choice > 5)
				{
					goto REPEAT;
				}
				else
				{
					cout << "Beli berapa tiket?: "; cin >> many;
					switch(choice)
					{
						case 1:
							total_price += (350000 * many);
							break;
							
						case 2:
							total_price += (295000 * many);
							break;
							
						case 3:
							total_price += (185000 * many);
							break;
							
						case 4:
							total_price += (250000 * many);
							break;
						
						case 5:
							total_price += (333000 * many);
							break;
					}
				}
				break;
				
			case 2:
				cout << nl;
				cout << "--- [Menu Pilihan Tiket Masuk] ---" << nl;
				cout << "1. Annual Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp350.000" << nl;
				cout << "2. Six Months Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp295.000" << nl;
				cout << "3. Weekend Dufan + Ancol + Samudra = Rp315.000" << nl;
				cout << "4. Weekend Dufan + Ancol = Rp275.000" << nl;
				cout << "5. Weekend Dufan + Ancol + Gondola = Rp317.000" << nl;
				cout << "6. Weekend Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan) = Rp250.000 " << nl;
				cout << "7. Six Months Pass Dufan (Ecard) + 1 x kunjungan reguler Ancol + Weekend Gondola = Rp337.000" << nl;
				cout << "(1-7): "; cin >> choice;
				
				if(choice < 1 && choice > 7)
				{
					goto REPEAT;
				}
				else
				{
					cout << "Beli berapa tiket?: "; cin >> many;
					switch(choice)
					{
						case 1:
							total_price += (350000 * many);
							break;
							
						case 2:
							total_price += (295000 * many);
							break;
							
						case 3:
							total_price += (315000 * many);
							break;
							
						case 4:
							total_price += (275000 * many);
							break;
						
						case 5:
							total_price += (317000 * many);
							break;
						
						case 6:
							total_price += (250000 * many);
							break;
							
						case 7:
							total_price += (337000 * many);
							break;
					}
				}
				break;
		}
		
		cout << nl;
		cout << "--------------------------" << nl;
		if(is_use_vehicle)
			switch(vehicle_type)
			{
				case 1:
					cout << "Karcis mobil\t: 25000" << nl;
					break;
					
				case 2:
					cout << "Karcis motor\t: 15000" << nl;
					break;
		}
		else
		{
			cout << "Tidak menggunakan kendaraan" << nl;
		}
		cout << "Total biaya Anda: " << "Rp" << total_price << nl;
		
		cout << "--------------------------" << nl;
		
		REPEAT:
		cout << nl;
		cout << "Ulangi? (y/n): "; cin >> next;
		tolower(next);
		if(next == 'n' || (next != 'y' && next != 'n'))
		{
			break;
		}
		else
		{
			system(clr);
		}
	}
	
	getch();
	return 0;
}
