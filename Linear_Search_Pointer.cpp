
#include<iostream.h>
#include<conio.h>
void main(){int a[5],x,*p=a,f=0; clrscr(); for(int i=0;i<5;i++) cin>>*(p+i); cin>>x; for(i=0;i<5;i++) if(*(p+i)==x) f=1; if(f) cout<<"Found"; else cout<<"Not Found"; getch();}
