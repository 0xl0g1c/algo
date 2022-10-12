/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Oct 9, 2022
*/

//PRISMA
#include<iostream>
#include<conio.h> //to get getch() func
#include<math.h> //to get sqrt() func
#include<iomanip> //to get setprecision() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	double tp,ka,la,
	lp,v;

	cout<<"-- PRISMA --"<<nl;
	cout<<"tinggi prisma\t\t: ";cin>>tp;
	cout<<"keliling alas prisma\t: ";cin>>ka;
	cout<<"luas alas prisma\t: ";cin>>la;
	
	lp=(tp*ka)+(2*la);
	v=la*tp;
	
	cout<<nl;
	cout<<"luas permukaan prisma\t: "<<fixed<<setprecision(2)<<"("<<tp<<"x"<<ka<<")+(2x"<<la<<")\t= "<<lp<<" cm2";
	cout<<nl;
	cout<<"volume prisma\t\t: "<<fixed<<setprecision(2)<<la<<"x"<<tp<<"\t\t= "<<v<<" cm3";
	
	cout<<nl<<nl;
	cout<<"Press any key to exit..."; getch();
	return 0;
}
