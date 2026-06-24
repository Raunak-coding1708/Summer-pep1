
#include<iostream.h>
#include<conio.h>
void main(){int a,b,c; int *p1=&a,*p2=&b,*p3=&c; clrscr(); cin>>*p1>>*p2>>*p3; if(*p1>*p2&&*p1>*p3) cout<<*p1; else if(*p2>*p3) cout<<*p2; else cout<<*p3; getch();}
