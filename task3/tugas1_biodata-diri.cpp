/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Friday, Oct 7, 2022
*/

//BIODATA DIRI
#include<iostream>
#include<sstream> //to get stringstream
#include<conio.h> //to get getch() func
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	string full_name,nick_name,place_and_date_of_birth,religion,address;
	int age;
	bool is_student;
	long long nim,ph_num;
	char gender;
	double score;
	
	cout<<"\t\t\t\t\t\tINPUT BIODATA DIRI"<<nl<<nl;
	cout<<"Masukkan nama lengkap Anda\t: "; getline(cin,full_name);
	cout<<"Masukkan nama panggilan Anda\t: "; cin>>nick_name;
	cout<<"Berapakah usia Anda sekarang\t: "; cin>>age;
	if(age<0||age>100) { cerr<<"Masukkan data dengan benar!"<<nl; getch(); return 0; } //logically, age will not > 100
	cout<<"Apakah Anda seorang mahasiswa? [1=ya/0=tidak]\t: "; cin>>is_student;
	cout<<"Masukkan nim Anda (ex. 0123456789)\t: "; cin>>nim;
	stringstream len; len<<nim; string len_nim=len.str(); //to convert int -> str
	if(len_nim.size()!=10||nim<0) { cerr<<"Masukkan data dengan benar!"<<nl; getch(); return 0; }
	cout<<"Masukkan nilai IPK Anda (ex. 4.00)\t: "; cin>>score; cin.ignore();
	if(score<0.00||score>4.00) {  cerr<<"Masukkan data dengan benar!"<<nl; getch(); return 0; }
	cout<<"Masukkan tempat dan tanggal lahir Anda (ex. Jakarta, January 1st, 1990)\t: "; getline(cin,place_and_date_of_birth);
	cout<<"Apa agama Anda?\t\t\t: "; cin>>religion;
	cout<<"Apa jenis kelamin Anda? [L/W]\t: "; cin>>gender; cin.ignore();
	cout<<"Masukkan alamat tempat tinggal Anda saat ini\t: "; getline(cin,address);
	cout<<"Masukkan nomor telepon/HP Anda (ex. 811122333)\t: "; cout<<"+62 "; cin>>ph_num;

	string is_valid=(is_student==1)?"Mahasiswa":"Bukan Mahasiswa"; //to check if input is valid college student
	//to check gender
	string check;
	if(gender=='L'||gender=='l') check="Laki-laki";
	else if(gender=='W'||gender=='w') check="Wanita";
	else check="undefined!";

	cout<<"--------------------------------------------------------------------------"<<nl<<nl;
	
	//print the result
	cout<<"\t\t\t\t\t\tBIODATA DIRI"<<nl<<nl;
	cout<<"Nama Lengkap\t\t: "<<full_name<<nl;
	cout<<"Nama Panggilan\t\t: "<<nick_name<<nl;
	cout<<"Umur\t\t\t: "<<age<<" tahun"<<nl;
	cout<<"Status\t\t\t: "<<is_student<<" ("<<is_valid<<")"<<nl;
	cout<<"NIM\t\t\t: "<<nim<<nl;
	cout<<"IPK Anda\t\t: "<<score<<nl;
	cout<<"Tempat & Tanggal Lahir\t: "<<place_and_date_of_birth<<nl;
	cout<<"Agama\t\t\t: "<<religion<<nl;
	cout<<"Jenis Kelamin\t\t: "<<gender<<" ("<<check<<")"<<nl;
	cout<<"Alamat\t\t\t: "<<address<<nl;
	cout<<"No. HP\t\t\t: "<<"+62 "<<ph_num<<nl<<nl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t"<<place_and_date_of_birth<<nl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t"<<"Yang bersangkutan,"<<nl<<nl<<nl<<nl<<nl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t"<<full_name<<nl;
	
	cout<<nl<<"Press any key to exit..."; getch(); //to prevent the program is closed directly after running
	return 0;
}
