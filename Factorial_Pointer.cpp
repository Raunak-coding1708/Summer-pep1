
#include<iostream.h>
#include<conio.h>
void main(){int n,f=1; int *p=&n; clrscr(); cin>>*p; for(int i=1;i<=*p;i++) f*=i; cout<<f; getch();}
