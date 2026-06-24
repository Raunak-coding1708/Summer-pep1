
#include<iostream.h>
#include<conio.h>
void main(){int n,r,s=0,t; int *p=&n; clrscr(); cin>>*p; t=*p; while(t){r=t%10; s=s+r*r*r; t/=10;} if(s==*p) cout<<"Armstrong"; else cout<<"Not Armstrong"; getch();}
