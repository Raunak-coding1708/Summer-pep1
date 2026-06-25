#include<iostream.h>
#include<conio.h>
int gcd(int a, int b){
return (b==0)? a : gcd (b, a % b);
}
int lcm(int a, int b){
	return (a * b) / gcd(a,b);
}
int main(){
	clrscr();
	int a = 12, b = 18;
	cout <<"LCM = " << lcm(a, b);
	getch ();
}