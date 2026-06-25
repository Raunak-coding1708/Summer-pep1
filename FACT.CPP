#include<iostream.h>
#include<conio.h>
int factorial(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else {
		return n * factorial (n-1);
		}
}
void main(){
	int num;
	cout<<"Enter number : -> "<<endl;
	cin>>num;
	cout<<"Factorial is : "<<factorial(num);
	getch();
}
