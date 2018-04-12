#include <stdlib.h>
#include <time.h>
#include <iostream>


using namespace std;

//multipying
	int biletulgowy(int a , int b)
	{
     return a*b;
	}
//multipying
	int biletynormalny(int d , int c)
	{
		return d*c;
	}
//absolute value out of "reszta"
	int reszta1(int reszta)
	{
		return reszta+(reszta*(-2));
	}
//calculates % discount
	int rabat1(int procent , int razem)
    {

		return razem - ((razem*procent)/100);
	}
//random number
	int losowanie(int y)
	{
		 srand (time(0));
         return rand() % y;
	}
//calculates the change in coins
	int monety(int reszta)
	{
		int x=0 , y=0 , z=0 , piatki=0 , dwojki=0 , jedynki=0;

		x=reszta%5;
		piatki=(reszta-x)/5;


		dwojki=(x-y)/2;
     if((dwojki*2)+(piatki*5)==reszta)
	 {
	 	jedynki=0;
	 }
     else
	{
	    jedynki=1;
	}
   cout<<"piecio zlotowki : "<<piatki<<"  dwu zlotowki : "<<dwojki<<"  jedno zlotowki : "<<jedynki<<endl;
     }


//prints amount of tickets
	 int bilety(int ulg , int norm)
	 {
	 	int x , y;
	 	x=ulg+norm;
	 	y=x-1;
	 	for(int i=0 ; i<=x ; i++)
	 	{
		 	if(i==0)
			 {
			 	cout<<endl;
				 cout<<"___________________"<<endl;
                cout<<"|                 |"<<endl;
             }
		 	if(i>0 && i<=ulg)
			 {
                cout<<"|  bilet uglowy   |"<<endl;
                cout<<"|                 |"<<endl;
			 }
		 	if(i>=ulg && i<=y)
		 	 {
			    cout<<"|  bilet normalny |"<<endl;
                cout<<"|                 |"<<endl;
			 }
 		    if(i==x)
			 {
                cout<<"|   TUTAJ KASUJ   |"<<endl;
				cout<<"|  validate here  |"<<endl;
				cout<<"|  ***#######***  |"<<endl;
                cout<<"|_________________|"<<endl;
			 }


		    }

	 }
