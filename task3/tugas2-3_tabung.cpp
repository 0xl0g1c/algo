/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Oct 9, 2022
*/

//TABUNG
#include<iostream>
#include<conio.h> //to get getch() func
#include<iomanip> //to get setprecision() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	const double PI=3.14159265358979323846;
	double r,t,d,
	lp,v;
	
	cout<<"-- TABUNG --"<<nl;
	cout<<"jari-jari tabung\t: ";cin>>r;
	cout<<"tinggi tabung\t\t: ";cin>>t;
	
	d=2*r; //diameter
	cout<<"------------------------"<<nl;
	cout<<"diameter\t=> "<<d<<nl;
	cout<<"------------------------"<<nl;
	
	lp=2*PI*r*(r+t);
	v=PI*r*r*t;
	
	cout<<nl;
	cout<<"luas permukaan tabung\t: "<<fixed<<setprecision(2)<<"2x"<<PI<<"x"<<r<<"x("<<r<<"+"<<t<<")\t= "<<lp<<" cm2";
	cout<<nl;
	cout<<"volume tabung\t\t: "<<fixed<<setprecision(2)<<PI<<"x"<<r<<"x"<<r<<"x"<<t<<"\t\t= "<<v<<" cm3";
	
	cout<<nl<<nl;
	cout<<"Press any key to exit..."; getch();
	return 0;
}
