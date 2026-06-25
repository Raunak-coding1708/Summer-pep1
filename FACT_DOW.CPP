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
	if(num == 0){
	fact = 1;
	}
	else{
	      do {
			fact = fact * i;
			i++;

}
	while(i <= num);
}
	cout<<"Factorial :"<< fact;
	getch();
}