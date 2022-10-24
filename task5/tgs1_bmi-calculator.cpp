/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Friday, Oct 21, 2022
*/

// link acuan: https://gendhismanis.id/kalkulatorbmi.html
#include<iostream>
#include<iomanip> //to call setprecision func
#include<conio.h>
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	float w,h,
	bmi;
	string check;
	cout<<"Masukkan tinggi badan\t: ";cin>>h;
	cout<<"Masukkan berat badan\t: ";cin>>w;
	
	if(cin.fail()){ cerr<<nl<<"[ERROR]: INVALID INPUT!"<<nl; return 0; }

	bmi=w/(h*h)*10000;
	if(bmi<18.5) check="Kurang berat badan";
	else if(bmi>=18.5 && bmi<22.9) check="Normal";
	else if(bmi>=23 && bmi<24.9) check="Kelebihan berat badan";
	else if(bmi>=25 && bmi<29.9) check="Obesitas tingkat 1";
	else if(bmi>=30) check="Obesitas tingkat 2";
	
	cout<<nl;
	cout<<"-------------------------------"<<nl;
	cout<<"IMT Anda   : "<<fixed<<setprecision(1)<<bmi<<nl;
	cout<<"Keterangan : "<<check<<nl;
	cout<<"-------------------------------"<<nl;
	
	getch();
	return 0;
}
