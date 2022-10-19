/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Monday, Oct 17, 2022
*/

#include<iostream>
#include<conio.h>
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	float n,
	am; //angka mutu
	string hm,sm,sn; //huruf mutu,sebutan mutu & skala nilai
	bool chk=true;
	cout<<"Input nilai: ";cin>>n;
	
	if(n>0&&n<41){
		hm="E";sm="Gagal";am=0.0;sn="0,1-40,9";
	}else if(n>=41&&n<56){
		hm="D";sm="Kurang";am=1.0;sn="41-55,9";
	}else if(n>=56&&n<60){
		hm="C";sm="Cukup";am=2.0;sn="56-59,9";
	}else if(n>=60&&n<64){
		hm="C+";sm="Lebih dari Cukup";am=2.3;sn="60-63,9";
	}else if(n>=64&&n<68){
		hm="B-";sm="Cukup Baik";am=2.7;sn="64-67,9";
	}else if(n>=68&&n<72){
		hm="B";sm="Baik";am=3.0;sn="68-71,9";
	}else if(n>=72&&n<76){
		hm="B+";sm="Lebih dari Baik";am=3.3;sn="72-75,9";
	}else if(n>=76&&n<81){
		hm="A-";sm="Istimewa";am=3.7;sn="76-80,9";
	}else if(n>=81&&n<=100){
		hm="A";sm="Sangat Istimewa";am=4.0;sn="81-100";
	}else{
		chk=false;
	}
	
	if(chk==false) {
		cout<<"Invalid input!!!"<<nl;
	}else{
		cout<<"Nilai Anda\t: "<<n<<nl;
		cout<<"Huruf Mutu\t: "<<hm<<nl;
		cout<<"Sebutan Mutu\t: "<<sm<<nl;
		cout<<"Angka Mutu\t: "<<am<<nl;
		cout<<"Skala Nilai\t: "<<sn<<nl;
	}
	
	getch();
	return 0;
}
