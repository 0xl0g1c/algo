/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Friday, Oct 7, 2022
*/

//KUBUS
#include<iostream>
#include<conio.h> //to get getch() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	int s,
	lp,v;
	
	cout<<"-- KUBUS --"<<nl;
	cout<<"sisi kubus\t: ";cin>>s;
	
	lp=6*(s*s);
	v=s*s*s;
	
	cout<<nl;
	cout<<"luas permukaan kubus\t: "<<"6x("<<s<<"x"<<s<<")\t= "<<lp<<" cm2";
	cout<<nl;
	cout<<"volume kubus\t\t: "<<s<<"x"<<s<<"\t\t= "<<v<<" cm3";
	
	cout<<nl<<nl;
	cout<<"Press any key to exit..."; getch();
	return 0;
}
