
#include<iostream.h>
#include<conio.h>
void main(){int a[5],*p=a,max,min; clrscr(); for(int i=0;i<5;i++) cin>>*(p+i); max=min=*p; for(i=1;i<5;i++){ if(*(p+i)>max) max=*(p+i); if(*(p+i)<min) min=*(p+i);} cout<<"Max="<<max<<" Min="<<min; getch();}
