
#include<iostream.h>
#include<conio.h>
void main(){int n,r,rev=0,t; int *p=&n; clrscr(); cin>>*p; t=*p; while(t){r=t%10; rev=rev*10+r; t/=10;} if(rev==*p) cout<<"Palindrome"; else cout<<"Not Palindrome"; getch();}
