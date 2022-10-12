/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Oct 9, 2022
*/

//LIMAS SEGI3
#include<iostream>
#include<conio.h> //to get getch() func
#include<iomanip> //to get setprecision() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	double tl,tal,al,pa1,ts1,pa2,ts2,pa3,ts3,
	la,ls1,ls2,ls3,ls_total,
	lp,v;

	cout<<"-- LIMAS SEGI3 --"<<nl;
	cout<<"tinggi limas\t\t: "; cin>>tl;
	cout<<"alas segitiga\t\t: "; cin>>al;
	cout<<"tinggi alas limas\t: "; cin>>tal;
	cout<<"alas segitiga 1\t\t: "; cin>>pa1; //sisi tegak 1
	cout<<"tinggi segitiga 1\t: "; cin>>ts1;
	cout<<"alas segitiga 2\t\t: "; cin>>pa2; //sisi tegak 2
	cout<<"tinggi segitiga 2\t: "; cin>>ts2;
	cout<<"alas segitiga 3\t\t: "; cin>>pa3; //sisi tegak 3
	cout<<"tinggi segitiga 3\t: "; cin>>ts3;

	la=(al*tal)/2; //luas alas limas
	ls1=(pa1*ts1)/2; //luas sisi tegak 1
	ls2=(pa2*ts2)/2; //luas sisi tegak 2
	ls3=(pa3*ts3)/2; //luas sisi tegak 3
	ls_total=ls1+ls2+ls3; //luas sisi tegak total
	
	lp=la+ls_total;
	v=(la*tl)/3;
	
	cout<<nl;
	cout<<"luas permukaan limas segi3\t: "<<fixed<<setprecision(2)<<la<<"+("<<ls1<<"+"<<ls2<<"+"<<ls3<<")\t= "<<lp<<" cm2";
	cout<<nl;
	cout<<"volume limas segi3\t\t: "<<fixed<<setprecision(2)<<"("<<la<<"x"<<tl<<")"<<"/3\t\t= "<<v<<" cm3";
	
	cout<<nl<<nl;
	cout<<"Press any key to exit..."; getch();
	return 0;
}
