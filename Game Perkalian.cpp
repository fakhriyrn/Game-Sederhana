#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
#include<ctime>


using namespace std;

int main()
{
	srand(time(0));	
	int angka;
	int a=rand()%100;
	int b=rand()%100;
	int jawaban= a*b;
	int i;
	int score=0;
	cout<<"Hitunglah Perkalian di bawah ini : "<<endl;
	for(i=1;i<=10;i++){
		cout<<i<<". "<<a<<"*"<<b<<"= ";
		cin>>angka;
		if(angka==jawaban){
			cout<<i+1<<". "<<a<<"*"<<b<<"= ";
		}else{
			system("cls");
			cout<<"YOU LOSE";
			break;
		}

		
		
	}
	
	if(i>10){
		cout<<"YOU WIN";
	}
	

}

