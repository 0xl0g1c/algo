/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Oct 9, 2022
*/

//KERUCUT
#include<iostream>
#include<iomanip> //to get setprecision() func
#include<conio.h> //to get getch() func
#include<math.h> //to get sqrt() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	const double PI=3.14159265358979323846;
	double r,t,sm,d,
	la,ls,
	lp,v;
	
	cout<<"-- KERUCUT --"<<nl;
	cout<<"jari-jari kerucut\t: "; cin>>r;
	cout<<"tinggi kerucut\t\t: "; cin>>t;
	
	sm=sqrt((r*r)+(t*t)); //sisi miring
	d=2*r; //diameter
	cout<<"----------------------------"<<nl;
	cout<<"sisi miring\t=> "<<sm<<nl;
	cout<<"diameter\t=> "<<d<<nl;
	cout<<"----------------------------"<<nl;

	la=PI*r*r;
	ls=PI*r*sm;
	lp=la+ls;
	v=(PI*r*r*t)/3;
	
	cout<<nl;
	cout<<"luas permukaan kerucut\t: "<<fixed<<setprecision(2)<<"("<<PI<<"x"<<r<<"x"<<r<<")+("<<PI<<"x"<<r<<"x("<<sm<<"))\t= "<<lp<<" cm2";
	cout<<nl;
	cout<<"volume kerucut\t\t: "<<fixed<<setprecision(2)<<"("<<PI<<"x"<<r<<"x"<<r<<"x"<<t<<")/3\t\t= "<<v<<" cm3";
	
	cout<<nl<<nl;
	cout<<"Press any key to exit..."; getch();
	return 0;
}
