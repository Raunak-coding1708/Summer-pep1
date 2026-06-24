
#include<iostream.h>
#include<conio.h>
void main(){int n,c=0; int *p=&n; clrscr(); cin>>*p; for(int i=1;i<=*p;i++) if(*p%i==0) c++; if(c==2) cout<<"Prime"; else cout<<"Not Prime"; getch();}
