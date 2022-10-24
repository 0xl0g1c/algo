/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Friday, Oct 21, 2022
*/

#include<iostream>
#include<conio.h>
#define nl "\n"
using namespace std;

int main(int argc,char**argv){
	int type, //tipe kendaraan
	hour; //berapa jam
	char chk_tickets,stay; //inap & chk_tickets
	
	int total_biaya=0,lama_parkir=0;
	bool is_stay=0;
	
	cout<<"Roda kendaraan? (2/4/6)\t: ";cin>>type;
	if(type!=2 && type!=4 && type!=6) cerr<<"[ERROR]: INVALID INPUT!"<<nl;
	
	cout<<"Apakah menginap? (y/n)\t: ";cin>>stay;
	if(stay=='n') {
		cout<<"Lama parkir? (1-24)\t: ";cin>>hour;
		if(hour<=0 || hour>24) { cerr<<"[ERROR]: MENGINAP DIHITUNG > 24 JAM"<<nl; return 0; }
	}else if(stay=='y'){
		is_stay=1;
	}else{
		cerr<<"[ERROR]: INVALID INPUT!"<<nl;
		return 0;
	}
	
	cout<<"ADA KARCIS? (y/n)\t: ";cin>>chk_tickets;
	
	cout<<nl;
	cout<<"-------------------------------------------------"<<nl;
	if(type==2){ //kendaraan roda 2
		if(!is_stay && hour<=24){ //tidak inap
			total_biaya+=3000; //roda 2 parkir berapa lama pun tetap sama tarifnya.
			cout<<"Tarif: Rp"<<total_biaya<<nl;
			cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			cout<<"(Kendaraan roda 2 tarif tetap sama sampai 24 jam)"<<nl;
		}else{ //inap
			total_biaya+=25000;
			cout<<"Biaya inap + 25000"<<nl;
		}

		if(chk_tickets=='n'){
			total_biaya+=50000;
			cout<<"(Biaya denda + 50000)"<<nl;
		}else{
			cout<<"(Tidak denda)"<<nl;
		}
		
		cout<<"=> Total biaya parkir: "<<total_biaya<<nl;
	}
	else if(type==4){ //kendaraan roda 4
		if(!is_stay){
			if(hour==1){
				total_biaya+=6000;
				cout<<"Tarif awal: Rp"<<total_biaya<<nl;
				cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			}else if(hour>=2 && hour<=5){
				int next_hour=2000;
				for(int i=2;i<=5;i++){
					if(i==2 && hour==2) lama_parkir=6000+next_hour;
					if(i==3 && hour==3) lama_parkir=6000+next_hour;
					if(i==4 && hour==4) lama_parkir=6000+next_hour;
					if(i==5 && hour==5) lama_parkir=6000+next_hour;
					next_hour+=2000;
					// debug: cout<<next_hour<<nl; 
				}
				total_biaya+=lama_parkir;
				cout<<"Tarif: Rp"<<total_biaya<<nl;
				cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			}else if(hour>=6 && hour<=12){
				total_biaya+=25000;
				cout<<"Tarif: Rp"<<total_biaya<<nl;
				cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			}else if(hour>=13 && hour<=24){
				total_biaya+=55000;
				cout<<"Tarif: Rp"<<total_biaya<<nl;
				cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			}
		}else{ //inap
			total_biaya+=50000;
			cout<<"Biaya inap + 50000"<<nl;
		}

		if(chk_tickets=='n'){
			total_biaya+=100000;
			cout<<"(Biaya denda + 100000)"<<nl;
		}else{
			cout<<"(Tidak denda)"<<nl;
		}
		
		cout<<"=> Total biaya parkir: "<<total_biaya<<nl;

	}else if(type==6){ //kendaraan roda 6
		if(!is_stay){
			if(hour==1){
				total_biaya+=8000;
				cout<<"Tarif awal: Rp"<<total_biaya<<nl;
				cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			}else if(hour>=2 && hour<=5){
				int next_hour=3500;
				for(int i=2;i<=5;i++){
					if(i==2 && hour==2) lama_parkir=8000+next_hour;
					if(i==3 && hour==3) lama_parkir=8000+next_hour;
					if(i==4 && hour==4) lama_parkir=8000+next_hour;
					if(i==5 && hour==5) lama_parkir=8000+next_hour;
					next_hour+=3500;
					// debug: cout<<next_hour<<nl;
				}
				total_biaya+=lama_parkir;
				cout<<"Tarif: Rp"<<total_biaya<<nl;
				cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			}else if(hour>=6 && hour<=12){
				total_biaya+=35000;
				cout<<"Tarif: Rp"<<total_biaya<<nl;
				cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			}else if(hour>=13 && hour<=24){
				total_biaya+=70000;
				cout<<"Tarif: Rp"<<total_biaya<<nl;
				cout<<"Lama parkir: "<<hour<<" jam"<<nl;
			}
		}else{ //inap
			total_biaya+=70000;
			cout<<"Biaya inap + 70000"<<nl;
		}

		if(chk_tickets=='n'){
			total_biaya+=100000;
			cout<<"(Biaya denda + 100000)"<<nl;
		}else{
			cout<<"(Tidak denda)"<<nl;
		}
		
		cout<<"=> Total biaya parkir: "<<total_biaya<<nl;
	}
	cout<<"-------------------------------------------------"<<nl;
	
	getch();
	return 0;
}
