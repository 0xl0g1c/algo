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
	long long n;
	cout<<"Input nilai: ";cin>>n;
	
	if(n%3==0 && n%5==0){
		cout<<"FizzBuzz"<<nl;
	}else if(n%3==0){
		cout<<"Fizz"<<nl;
	}else if(n%5==0){
		cout<<"Buzz"<<nl;
	}else{
		cout<<n<<nl;
	}
	
	getch();
	return 0;
}
