/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Tuesday, Oct 31, 2022
*/

// ref link: https://www.calculator.net/bmi-calculator.html
#include <iostream>
#include <conio.h> // to use getch function
#include <cstdlib> // to use system function
#include <iomanip> // to use setprecision function
#define nl "\n" // alias for new line

#ifdef _WIN32
#define clr "cls"
#else //In any other OS
#define clr "clear"
#endif

using namespace std;

int main(int argc, char *argv[])
{
	int gender;
	float height,weight,bmi;
	string chk;
	
	while(1)
	{
		char next;
		cout << "===== [KALKULATOR IMT/BMI] =====" << nl;
	
		cout << "Jenis kelamin Anda?" << nl;
		cout << "1. Pria" << nl;
		cout << "2. Perempuan" << nl;
		cout << "(1/2): "; cin >> gender; // PEREMPUAN DAN PRIA MEMILIKI INDEKS MASA TUBUH YANG SAMA, YANG MEMBEDAKAN HANYALAH UMUR!
		
		switch(gender)
		{
			case 1:
				chk = "(Pria) ";
				break;
			case 2:
				chk = "(Perempuan) ";
				break;
			default:
				system("exit");
		}
		cout << nl;
		cout << "Masukan tinggi badan Anda: "; cin >> height;
		cout << "Masukkan berat badan Anda: "; cin >> weight;
		
		bmi = weight / (height * height) * 10000;
		if(bmi < 18.5)
		{
			chk += "Underweight (Kekurangan berat badan)";
		}
		else if(bmi >= 18.5 && bmi <= 22.9)
		{
			chk += "Normal";
		}
		else if(bmi >= 23 && bmi <= 24.9) 
		{
			chk += "Overweight (Kelebihan berat badan)";
		}
		else if(bmi >= 25 && bmi <= 29.9) 
		{
			chk += "Obess class I (Obesitas tingkat 1)";
		} 
		else if(bmi >= 30 && bmi <= 39.9) 
		{
			chk += "Obess class II (Obesitas tingkat 2)";
		} 
		else // over 40
		{
			chk += "Obess class III (Obesitas tingkat 3)";
		}
		
		cout << "----------------------------------------------------------" << nl;
		cout << "Indeks Masa Tubuh Anda " << fixed << setprecision(1) << bmi << nl;
		cout << "Keterangan: " << chk << nl;
		cout << "----------------------------------------------------------" << nl;
		
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
