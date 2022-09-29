#include <iostream>
using namespace std;

int main() {

    int bayar, tarif, kwh, gol;
    cout<<"Program Pembayaran Listrik"<<endl; 
    cout<<"--------------------------"<<endl; 
    cout<<"Pilih golongan tarif : "; 
    cin>>tarif; 

        if (gol==1)
        {
            tarif=1000;
        }

        else {
            tarif=2000;
        }

    cout<<"Pemakaian kwh : ";
    cin>>kwh;
        if (kwh<100)
        {
           bayar=10*tarif;
        }
        else if (kwh>=1000)
        {
            bayar=kwh*tarif*0.10;
        }
        else{
            bayar=kwh*tarif;
        }
   
    cout<<endl<<"Total Pembayaran : "<<bayar<<endl;;
    return 0;    

}