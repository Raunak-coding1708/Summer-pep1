#include<iostream.h>
#include<conio.h>
void main(){
	clrscr();
	int n, sum = 0;
	cout<<"Enter a Number:";
	cin>>n;
	for(int i = 1; i<=n/2; i++){
		if(n % i == 0)
		{
			sum = sum + i;
		}
	}
	if(sum == n)
		cout<< n << " is a Perfect Number";
	else
		cout<< n << " is a Perfect Number";
	getch();
}