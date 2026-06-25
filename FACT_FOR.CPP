#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, fact =1;
	cout<<"Enter number  : " ;
	cin>>num;
	for(int i = 1; i <= num; i++){
		fact = fact * i;
	}
	cout<<"Factorial :"<<fact;
	getch();
}