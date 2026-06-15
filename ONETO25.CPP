#include<stdio.h>
#include<conio.h>
int main(){
clrscr();
int n=5, k=1;
int i,j;
for(i=1;i<=n;i++){
 for(j=1;j<=n;j++){
  printf("%2d",k++);
  }
  printf("\n");
  }
  getch();
  return 0;
 }