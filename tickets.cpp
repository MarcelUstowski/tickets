#include <iostream>
#include "tickets.h"
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
 int f;
 cout<<"Choose language___Wybierz jezyk"<<endl;
 cout<<"   1.english         2.polski  "<<endl;
 cin>>f;
 if(f==1)
 {


 	int k ,l;
 string a, b , rabat;
 cout<<"choose:"<<endl<<"a)add balance to your account "<<endl<<"b)buy a ticket"<<endl;
 cin>>a;
 cout<<endl;
 if(a=="a")
 {
 int i , x , y=200;
i = losowanie(y);
 cout<<"current balance : "<<i<<endl;
 cout<<"add : ";
 cin>>x;
 cout<<endl<<"balance after adding : "<<i+x<<endl;

 return 0;
 }

 else
 {
int a , d , b , c  , h , razem=0 , wplata=0 , procent ;

 cout<<"the ticket will be for:"<<endl;
 cout<<"1) one hour      ulg= 5zl  norm= 7zl"<<endl;
 cout<<"2) two hours     ulg= 7zl  norm= 10zl"<<endl;
 cout<<"3) the whole day ulg= 15zl norm= 20zl" <<endl;
 cout<<endl;

 cin>>h;
 if(h==1)
 {
b=5;
c=7;
 }
 else
 {
	 if(h==2)
	 {
    	b=7;
	    c=10;
	 }
     else
	 {
		b=15;
	    c=20;
	 }
 }


 cout<<"student tickets   : ";
 cin>>a;
 cout<<"normal tickets    : ";
 cin>>d;

k=a;
l=d;
razem=biletynormalny(d ,c) + biletulgowy(a , b);


 cout<<"Do you have a discount code? yes / no"<<endl;
 cin>>rabat;
 if(rabat=="yes")
 {
 	cout<<"What for?"<<endl<<"options :  group tour 25% | big family card 50% | for people with disabilities 75%" <<endl<<"please write the percentage you have"<<endl;
 	cin>>procent;

       if(procent==25 || procent==50 || procent==75)
	{
		razem=rabat1(procent , razem);
	}
     else
	 {
		 cout<<"Wrong input"<<endl;
		return 0;
	 }

 }
 cout<<"left to pay : "<<razem<<endl;
 cout<< "pay        : ";
 cin>>wplata;
 razem=razem-wplata;

 while(razem>=0)
 {
 cout<<"left to pay : "<<razem<<endl;
 cout<<"pay         : ";
 cin>>wplata;
 razem=razem-wplata;
 }

 cout<<endl;
 if(razem<0)
 {
 	cout<< "change = "<< reszta1(razem) <<endl;
 	monety(reszta1(razem));
	 cout<< " Have a nice ride ";
 }
 else
 {
    cout<< " Have a nice ride ";
 }

 }

bilety(k,l);

 return 0;
 }




 if(f==2)
 {


 int k ,l;
 string a, b , rabat;
 cout<<"wybierz"<<endl<<"a)doladowanie konta"<<endl<<"b)zakup biletu"<<endl;
 cin>>a;
 cout<<endl;
 if(a=="a")
 {
 int i , x , y=200;
i = losowanie(y);
 cout<<"aktualny stan konta : "<<i<<endl;
 cout<<"kwota doladowania = ";
 cin>>x;
 cout<<endl<<"kwota po doladowaniu : "<<i+x<<endl;

 return 0;
 }

 else
 {
int a , d , b , c  , h , razem=0 , wplata=0 , procent ;

 cout<<"bilet bedzie:"<<endl;
 cout<<"1) godzinny      ulg= 5zl  norm= 7zl"<<endl;
 cout<<"2) dwu godzinny  ulg= 7zl  norm= 10zl"<<endl;
 cout<<"3) na caly dzien ulg= 15zl norm= 20zl" <<endl;
 cout<<endl;

 cin>>h;
 if(h==1)
 {
b=5;
c=7;
 }
 else
 {
	 if(h==2)
	 {
    	b=7;
	    c=10;
	 }
     else
	 {
		b=15;
	    c=20;
	 }
 }


 cout<<"ilosc ulgowych    : ";
 cin>>a;
 cout<<"ilosc normalnych  : ";
 cin>>d;

k=a;
l=d;
razem=biletynormalny(d ,c) + biletulgowy(a , b);


 cout<<"czy posiada pan/pani kod rabatowy? tak / nie"<<endl;
 cin>>rabat;
 if(rabat=="tak")
 {
 	cout<<"jaka wartosc rabatu?"<<endl<<"mozliwe rabaty :  wycieczka 25% | karta duzej rodziny 50% | dla osoby niepelnosprawnej 75%" <<endl;
 	cin>>procent;

       if(procent==25 || procent==50 || procent==75)
	{
		razem=rabat1(procent , razem);
	}
     else
	 {
		 cout<<"Bledna wartosc rabatu"<<endl;
		return 0;
	 }

 }
 cout<<"do zaplaty pozostalo : "<<razem<<endl;
 cout<< "wplata              : ";
 cin>>wplata;
 razem=razem-wplata;

 while(razem>=0)
 {
 cout<<"do zaplaty pozostalo : "<<razem<<endl;
 cout<< "wplata              : ";
 cin>>wplata;
 razem=razem-wplata;
 }

 cout<<endl;
 if(razem<0)
 {
 	cout<< "reszta = "<< reszta1(razem) <<endl;
 	monety(reszta1(razem));
	 cout<< " milej podrozy dziekujemy zapraszamy ponownie ";
 }
 else
 {
    cout<< " milej podrozy dziekujemy zapraszamy ponownie ";
 }

 }

bilety(k,l);
 }
 return 0;
 }
