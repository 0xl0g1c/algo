/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Oct 9, 2022
*/

//LIMAS SEGI4
#include<iostream>
#include<conio.h> //to get getch() func
#include<iomanip> //to get setprecision() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	const double PI=3.14159265358979323846;
	double tl,pa1,ts1,pa2,ts2,pa3,ts3,pa4,ts4,
	la,ls1,ls2,ls3,ls4,ls_total,
	lp,v;
	
	cout<<"-- LIMAS SEGI4 --"<<nl;
	cout<<"luas alas limas\t\t: ";cin>>la;
	cout<<"tinggi limas\t\t: ";cin>>tl;
	cout<<"panjang alas segitiga 1\t: ";cin>>pa1;
	cout<<"tinggi segitiga 1\t: ";cin>>ts1;
	cout<<"panjang alas segitiga 2\t: ";cin>>pa2;
	cout<<"tinggi segitiga 2\t: ";cin>>ts2;
	cout<<"panjang alas segitiga 3\t: ";cin>>pa3;
	cout<<"tinggi segitiga 3\t: ";cin>>ts3;
	cout<<"panjang alas segitiga 4\t: ";cin>>pa4;
	cout<<"tinggi segitiga 4\t: ";cin>>ts4;
	
	ls1=(pa1*ts1)/2;
	ls2=(pa2*ts2)/2;
	ls4=(pa4*ts4)/2;
	ls3=(pa3*ts3)/2;
	ls_total=ls1+ls2+ls3+ls4;
	
	lp=la+ls_total;
	v=(la*tl)/3;
	
	cout<<nl;
	cout<<"luas permukaan limas segi4\t: "<<fixed<<setprecision(2)<<la<<"+("<<ls1<<"+"<<ls2<<"+"<<ls3<<"+"<<ls4<<")\t= "<<lp<<" cm2";
	cout<<nl;
	cout<<"volume limas segi4\t\t: "<<fixed<<setprecision(2)<<"("<<la<<"x"<<tl<<")"<<"/3\t\t= "<<v<<" cm3";
	
	cout<<nl<<nl;
	cout<<"Press any key to exit..."; getch();
	return 0;
}
