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
	int type,hours;
	char ticket;
	
	bool is_stay=0,is_have=0;
	int total_rates=0,total_days=0,long_stay=0;
	
	while(1){
		char next;
		cout << "===== [MENGHITUNG TARIF PARKIR PROGRESIF] =====" << nl;
		
		cout << "Roda kendaraan: " << nl;
		cout << "1. Roda 2" << nl;
		cout << "2. Roda 4" << nl;
		cout << "3. Roda 6" << nl;
		cout << "(1/2/3): "; cin >> type;
		
		if((type != 1) && (type != 2) && (type != 3))
		{
			goto REPEAT;
		}
		
		cout << "Parkir berapa jam?: "; cin >> hours;
		if(hours <= 0)
		{
			goto REPEAT;
		}
		else if(hours >= 1 && hours <= 24)
		{
			is_stay = 0; // parkir dari 1 - 24 jam (sehari penuh)
		}
		else
		{
			is_stay = 1; // parkir > 24 jam (inap)
			total_days = hours / 24;
			total_days %= 24;
			/* example:
				25 / 24 => 1
				1 % 24  => 1 --> 1 hari menginap nantinya akan dikali dengan biaya inap per harinya.
			 */
		}
		
		cout << "Punya karcis? (y/n): "; cin >> ticket;
		tolower(ticket);
		if(ticket != 'y' && ticket != 'n')
		{
			goto REPEAT; // error -> exit
		}
		else if(ticket == 'y')
		{
			is_have = 1;
		}
		else
		{
			is_have = 0;
		}
		
		switch(type)
		{
			case 1:
				if(is_stay) // cek apakah inap | tidak inap
				{
					total_rates += (25000 * total_days);
				}
				else
				{
					total_rates += 3000;
				}
				
				if(!is_have) // (is_have == 0) --> cek ketersediaan tiket.
				{
					total_rates += 50000; // denda
				}
			break;
			
			case 2:
				if(is_stay) // cek apakah inap | tidak inap
				{
					total_rates += (50000 * total_days);
				}
				else
				{
					if(hours >= 2 && hours <= 5)
					{
						long_stay = (hours - 1) * 2000;
						total_rates += (6000 + long_stay);
					}
					else if(hours >= 6 && hours <= 12)
					{
						total_rates += 25000;
					}
					else // dari 13 - 24
					{
						total_rates += 55000;
					}
				}
				
				if(!is_have) // (is_have == 0) --> cek ketersediaan tiket.
				{
					total_rates += 100000; // denda
				}
			break;

			case 3:
				if(is_stay) // cek apakah inap | tidak inap
				{
					total_rates += (70000 * total_days);
				}
				else
				{
					if(hours >= 2 && hours <= 5)
					{
						long_stay = (hours - 1) * 3500;
						total_rates += (8000 + long_stay);
					}
					else if(hours >= 6 && hours <= 12)
					{
						total_rates += 35000;
					}
					else // dari 13 - 24
					{
						total_rates += 70000;
					}
				}

				if(!is_have) // (is_have == 0) --> cek ketersediaan tiket.
				{
					total_rates += 100000; // denda
				}
				break;
		}
		
		cout << nl;
		cout << "-----------------------------------------" << nl;
		cout << "Total durasi parkir\t: " << total_days << " hari " << "(" << hours << " jam)" << nl;
		
		if(!is_have)
		{
			if(type == 1)
			{
				cout << "Denda karcis\t\t: 50000" << nl;
			}
			else if(type == 2)
			{
				cout << "Denda karcis\t\t: 100000" << nl;
			}
			else
			{
				cout << "Denda karcis\t\t: 100000" << nl;
			}
		}
		else
		{
			cout << "Tidak kena denda" << nl;
		}
		
		cout << "Total tarif parkir\t: " << "Rp" << total_rates << nl;
		cout << "-----------------------------------------" << nl;
		
		REPEAT:
		cout << nl;
		cout << "Ulangi? (y/n): "; cin >> next;
		tolower(next);
		if(next == 'n' || (next != 'y' && next != 'n'))
		{
			break; // out from looping
		} 
		else
		{
			system(clr);
		}
	}
	
	getch();
	return 0;
}
