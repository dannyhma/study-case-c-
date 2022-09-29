#include <iostream>
using namespace std;

int main() {

    int bayar, akhir, diskon, uang; 
    cout<<"Program Swalayan"<<endl; 
    cout<<"--------------------------"<<endl; 
    cout<<"Total pembayaran : "; 
    cin>>bayar; 

        if(bayar<=100000){
                diskon=bayar*0; 
                akhir=bayar-diskon; 
                cout<<endl<<"anda hanya mendapatkan diskon 0%"<<endl; 
            } 

        else if((bayar>100000) && (bayar<=200000)){               
                diskon=bayar*0.05; 
                akhir=bayar-diskon; 
                cout<<endl<<"selamat anda mendapatkan diskon 5%"<<endl;           
            } 
            
        else if(bayar>200000){ 
            diskon=bayar*0.10; 
            akhir=bayar-diskon; 
            cout<<endl<<"selamat anda mendapatkan diskon 10%"<<endl; 
            }

        else{ 
            akhir=bayar; 
        } 

    cout<<endl<<"jadi total pembayarannya = "<<akhir<<endl;; 
    return 0; 

}