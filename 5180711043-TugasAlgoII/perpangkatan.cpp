#include <iostream>
#include <windows.h>
using namespace std;

void prolog()
{
    cout<<" ===========================================\n";
    cout<<"        MENGHITUNG HASIL PERPANGKATAN\n";
    cout<<" ===========================================\n\n";
}

double pangkt_positif(double agk,double pang)
    {
         if (pang==0)
            return 1;
         else
            return pangkt_positif(agk,pang-1)*agk;
    }


 double pangkt_negatif(double agk,double pang)
    {
         if (pang==0)
            return 1;
         else
            return pangkt_negatif(agk,pang+1)*agk;
    }

int main()
{
cout<<"\n\n";
prolog();

double bil,pkt, hasil, hasilx;

cout<<" Masukan Bilangan\t: ";cin>>bil;
cout<<" Masukkan Pangkat\t: ";cin>>pkt;

if (bil==0)
    {
        hasil=0;
    }
else if (pkt==0)
    {
        hasil=1;
    }
else if (pkt>0)
    {
        hasil= pangkt_positif(bil, pkt);
    }

else if (bil>0 && pkt<0)
    {
        hasilx=pangkt_negatif(bil, pkt);
        hasil=(1/hasilx);
    }

else if (bil<0 && pkt<0)
    {
        hasilx=pangkt_negatif(bil, pkt);
        hasil= (1/hasilx);
    }

cout<<"\n ===========================================\n";
cout<<" Hasil Perpangkatan\t: "<<hasil<<endl;
cout<<" ===========================================\n";

cout<<"\n\n\n";
return 0;
}
