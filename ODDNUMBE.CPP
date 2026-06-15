#include<stdio.h>
#include<conio.h>
int main(){
clrscr();
int n=5;
int i,j;
int x = 1;
for(i=1;i<=n;i++){
  for(j=1;j<=n;j++){
   printf("%2d",x);
   x= x+2;
   }
   printf("\n");
  }
  getch();
  return 0;
  }