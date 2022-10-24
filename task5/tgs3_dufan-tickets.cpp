/*
	Author		: Wahyu Priambodo (2207421048)
	Class		: TMJ 1B
	Created on	: Saturday, Oct 22, 2022
*/

#include<iostream>
#include<algorithm> //to call transform func
#include<conio.h>
#define nl "\n"
using namespace std;

int main(int argc,char**agrv){
	int choice;
	string day_visited,vehicle_type;
	char transport;
	
	int total_biaya=0;
	bool use_transport=0; //sebagai tanda membeli tiket kendaraan
	
	cout<<"Hari apa Anda berkunjung? (Senin-Minggu)\t: ";cin>>day_visited;
	transform(day_visited.begin(), day_visited.end(), day_visited.begin(), ::tolower);
	if(day_visited!="senin" && day_visited!="selasa" && day_visited!="rabu" && day_visited!="kamis" && day_visited!="jumat" && day_visited!="sabtu" && day_visited!="minggu"){
		cerr<<"[ERROR]: INVALID INPUT!"<<nl;
		return 0;
	}
	cout<<"Beli tiket kendaraan? (y/n)\t\t\t: ";cin>>transport;
	if(transport=='y'){
		use_transport=1;
	}else if(transport=='n'){
		use_transport=0;
	}else{
		cerr<<"[ERROR]: INVALID INPUT!"<<nl;
		return 0;
	}
	
	if(use_transport){
		cout<<"Jenis kendaraan? (Mobil/Motor)\t\t\t: ";cin>>vehicle_type;
		transform(vehicle_type.begin(), vehicle_type.end(), vehicle_type.begin(), ::tolower);
		if(vehicle_type=="mobil"){
			total_biaya+=25000;
		}else if(vehicle_type=="motor"){
			total_biaya+=15000;
		}else{
			cerr<<"[ERROR]: INVALID INPUT!"<<nl;
			return 0;
		}
	}
	
	cout<<nl;
	if(day_visited=="senin" || day_visited=="selasa" || day_visited=="rabu" || day_visited=="kamis" || day_visited=="jumat"){
		cout<<"=== [Beberapa Pilihan Tiket Masuk] ==="<<nl;
		cout<<"1. Annual Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp350.000"<<nl;
		cout<<"2. Six Months Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp295.000"<<nl;
		cout<<"3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. pembelian 4 Tiket, berlaku kelipatan) = Rp185.000"<<nl;
		cout<<"4. Weekday Dufan + Ancol = Rp250.000"<<nl;
		cout<<"5. Six Months Pass Dufan (Ecard) + 1 x kunjungan reguler Ancol + Weekday Gondola = Rp333.000 "<<nl;
		cout<<"Pilihan Anda? (1-5): ";cin>>choice;
		
		if(choice==1){
			total_biaya+=350000;
		}else if(choice==2){
			total_biaya+=295000;
		}else if(choice==3){
			total_biaya+=185000;
		}else if(choice==4){
			total_biaya+=250000;
		}else if(choice==5){
			total_biaya+=333000;
		}else{
			cerr<<"[ERROR]: TIKET MASUK TIDAK TERSEDIA"<<nl;
		}
	}else if(day_visited=="sabtu" || day_visited=="minggu"){
		cout<<"=== [Beberapa Pilihan Tiket Masuk] ==="<<nl;
		cout<<"1. Annual Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp350.000"<<nl;
		cout<<"2. Six Months Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp295.000"<<nl;
		cout<<"3. Weekend Dufan + Ancol + Samudra = Rp315.000"<<nl;
		cout<<"4. Weekend Dufan + Ancol = Rp275.000"<<nl;
		cout<<"5. Weekend Dufan + Ancol + Gondola = Rp317.000"<<nl;
		cout<<"6. Weekend Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan) = Rp250.000 "<<nl;
		cout<<"7. Six Months Pass Dufan (Ecard) + 1 x kunjungan reguler Ancol + Weekend Gondola = Rp337.000"<<nl;
		cout<<"Pilihan Anda? (1-7): ";cin>>choice;
		
		if(choice==1){
			total_biaya+=350000;
		}else if(choice==2){
			total_biaya+=295000;
		}else if(choice==3){
			total_biaya+=315000;
		}else if(choice==4){
			total_biaya+=275000;
		}else if(choice==5){
			total_biaya+=317000;
		}else if(choice==6){
			total_biaya+=250000;
		}else if(choice==7){
			total_biaya+=337000;
		}else{
			cerr<<"[ERROR]: TIKET MASUK TIDAK TERSEDIA"<<nl;
		}
	}
	
	cout<<nl;
	cout<<"------------------------------"<<nl;
	if(!use_transport){
		cout<<"(Tidak menggunakan kendaraan)"<<nl;
	}else{
		cout<<"(Harga tiket "<<vehicle_type<<" = "<<(vehicle_type=="mobil"?"25000":"15000")<<")"<<nl;
	}
	cout<<"=> Total harga tiket: Rp"<<total_biaya<<nl;
	cout<<"------------------------------"<<nl;
	getch();
	return 0;
}
