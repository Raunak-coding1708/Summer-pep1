
#include<iostream.h>
#include<conio.h>
void main(){int n,a=0,b=1,c; int *p=&n; clrscr(); cin>>*p; for(int i=1;i<=*p;i++){ cout<<a<<" "; c=a+b; a=b; b=c;} getch();}
