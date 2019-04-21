#include <iostream>
#include <conio.h>
using namespace::std;

void prolog()
{
    cout<<" ===========================================\n";
    cout<<"               SORTING (BUBBLE)\n";
    cout<<" ===========================================\n\n";
}

main()
{
cout<<"\n\n";
prolog();

int temp;
int n;
cout<<" Masukan Banyak Data: ";cin>>n;
int nilai[n];

    for (int a=1; a<=n; a++)
        {
            cout<<" Data Ke- "<<a<<" : ";cin>>nilai[a];
        }
cout<<"\n\n                    DATA AWAL\n";
cout<<" ===========================================\n";

    for(int a=1; a<=n; a++)
        {
            cout<<" "<<nilai[a]<<" ";
        }

//sorting Bubble;
for(int a=n-1; a>=1; a--)
    {
        for(int b=1; b<=a; b++)
            {
                if(nilai[b]>nilai[b+1])
                {
                    temp=nilai[b+1];
                    nilai[b+1]=nilai[b];
                    nilai[b]=temp;
                }
            }
    }
cout<<"\n ===========================================\n\n";
cout<<"                  SORTING DATA\n";
cout<<" ===========================================\n";
cout<<"                   Ascending\n";
cout<<" ===========================================\n";
for (int a=1; a<=n; a++){
cout<<" "<<nilai[a]<<" ";}

cout<<"\n ===========================================\n";
cout<<"                   Desending\n";
cout<<" ===========================================\n";
for (int a=n; a>=1; a--){
cout<<" "<<nilai[a]<<" ";}
cout<<"\n ===========================================\n";


cout<<"\n\n\n";
getch();
}
//sumber: https://aboutcprogramming.wordpress.com/2015/12/09/pengertian-dan-contoh-sorting-di-dalam-c/
