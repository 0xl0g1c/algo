/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Oct 9, 2022
*/

//BOLA
#include<iostream>
#include<conio.h> //to get getch() func
#include<iomanip> //to get setprecision() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	const double PI=3.14159265358979323846;
	double r,
	lp,v;
	
	cout<<"-- BOLA --"<<nl;
	cout<<"jari-jari bola\t: "; cin>>r;
	
	lp=4*(PI*r*r);
	v=4*(PI*r*r*r)/3;
	
	cout<<nl;
	cout<<"luas permukaan bola\t: "<<fixed<<setprecision(2)<<"4x("<<PI<<"x"<<r<<"x"<<r<<")\t\t= "<<lp<<" cm2";
	cout<<nl;
	cout<<"volume bola\t\t: "<<fixed<<setprecision(2)<<"4x("<<PI<<"x"<<r<<"x"<<r<<"x"<<r<<")/3\t= "<<v<<" cm3";
	
	cout<<nl<<nl;
	cout<<"Press any key to exit..."; getch();
	return 0;
}
