#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num;
	long fact = 1;
	int  i = 1;
	cout<<"Enter number: " ;
	cin>>num;
	while(i <= num){
		fact = fact * i;
		i++;
	}
	cout<<"Factorial :"<< fact;
	getch();
}