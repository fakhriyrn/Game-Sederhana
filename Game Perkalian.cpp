#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<conio.h>
#include<windows.h>


using namespace std;

int main()
{
	int angka;
	int a=rand();
	int b=rand();
	int jawaban= a*b;
	
	cout<<"Hitunglah Perkalian di bawah ini : "<<endl;
	cout<<a<<"*"<<b<<"= ";
	cin>>angka;
	if(angka==jawaban){
		cout<<"YOU WIN";
	}else{
		cout<<"YOU LOSE";
	}
	

}

