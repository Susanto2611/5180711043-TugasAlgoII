#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace::std;

void prolog()
{
    cout<<" ===========================================\n";
    cout<<"               SORTING (INSERTION)\n";
    cout<<" ===========================================\n\n";
}

main ()
{cout<<"\n\n";

int i,j, b, k, m, n,x,z,ketemu=0;
int temp[100];
prolog();
cout<<" Masukan Banyak Data: ";cin>>n;
int data[n];

for(i=0; i<n; i++)
    {
        cout<<" Data Ke-"<<i+1<<" : ";cin>>data[i];
    }

cout<<"\n\n ===========================================\n";
cout<<" DATA AWAL"<<endl;
for(int i=0; i<n; i++)
    {
        cout<<" "<<i+1<<".";
        cout<<data[i]<<" ";
        cout<<endl;
    }


cout<<"\n ===========================================\n";
cout<<"                  SORTING DATA\n";
cout<<" ===========================================\n";
cout<<"                   Ascending\n";
cout<<" ===========================================\n";
for(i=0; i<n; i++)
    {
        cout<<i+1<<" ";
        cout<<data[i]<<" "<<endl;
    }
for (i=0; i<n; i++)
    {
        for (j=0; j<=i; j++)
            {
                if(data[i]<data[j])
                    {
                        m=data[i];
                        data[i]=data[j];
                        data[j]=m;
                    }
            }
        cout<<"\n #"<<i+11<<": ";
        for(k=0; k<=i; k++)
            {
                cout<<" "<<data[k];
            }
    }

cout<<"\n ===========================================\n";
cout<<"                   Desending\n";
cout<<" ===========================================\n";
for(i=0; i<n; i++)
    {
    cout<<i+1<<".";
    cout<<data[i]<<" "<<endl;
    }




for (i=0; i<n; i++)
    {
        for (j=0; j<=i; j++)
            {
                if(data[i]>data[j])
                    {
                        m=data[i];
                        data[i]=data[j];
                        data[j]=m;
                    }
            }
        cout<<"\n #"<<i+1<<": ";
    for(k=0; k<=i; k++)
        {
            cout<<" "<<data[k];
        }
    }

cout<<"\n ===========================================\n";
getch();
}
//sumber:https://aboutcprogramming.wordpress.com/2015/12/09/pengertian-dan-contoh-sorting-di-dalam-c/
