
#include<iostream.h>
#include<conio.h>
void main(){int a[2][2],b[2][2],c[2][2]; clrscr(); for(int i=0;i<2;i++)for(int j=0;j<2;j++)cin>>a[i][j]; for(i=0;i<2;i++)for(int j=0;j<2;j++)cin>>b[i][j]; for(i=0;i<2;i++)for(int j=0;j<2;j++){c[i][j]=*(*(a+i)+j)+*(*(b+i)+j); cout<<c[i][j]<<" ";} getch();}
