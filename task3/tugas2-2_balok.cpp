/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Friday, Oct 7, 2022
*/

//BALOK
#include<iostream>
#include<conio.h> //to get getch() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	int p,l,t,
	lp,v;
	
	cout<<"-- BALOK --"<<nl;
	cout<<"panjang balok\t: "; cin>>p;
	cout<<"lebar balok\t: "; cin>>l;
	cout<<"tinggi balok\t: "; cin>>t;
	
	lp=2*((p*l)+(p*t)+(l*t));
	v=p*l*t;
	
	cout<<nl;
	cout<<"luas permukaan balok\t: "<<"2x(("<<p<<"x"<<l<<")+("<<p<<"x"<<t<<")+("<<l<<"x"<<t<<"))\t= "<<lp<<" cm2";
	cout<<nl;
	cout<<"volume balok\t\t: "<<p<<"x"<<l<<"x"<<t<<"\t\t\t= "<<v<<" cm3";
	
	cout<<nl<<nl;
	cout<<"Press any key to exit..."; getch();
	return 0;
}
