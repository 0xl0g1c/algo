/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Sunday, Oct 16, 2022
*/

#include<iostream>
#include<conio.h>
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	long long n;
	cout<<"Input nilai: ";cin>>n;
	
	//CHECK ODD & EVEN NUMBER
	string chk=(n%2==0?" adalah bilangan genap":" adalah bilangan ganjil");
	cout<<n<<chk<<nl;
	
	// CHECK PRIME NUMBER
	bool is_prime=true;
	long long flag=0;
	
	if(n<2) is_prime=false;
	for(long long i=n;i>0;i--){
		if(n%i==0) flag++; //cek apakah n habis dibagi dengan faktor lain.
	}
	
	if(flag==2) is_prime=true; //faktor bilangannya 1 & itu sendiri.
	else is_prime=false; //faktor bilangannya > 2.
	
	cout<<n<<(is_prime?" adalah bilangan prima":" bukan bilangan prima")<<nl;
	
	getch();
	return 0;
}
