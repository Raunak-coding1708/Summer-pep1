#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
 char pass[30]="admin123";
 char pass1[30];
 int i = 0;
 char ch;
 clrscr();
 printf("Enter Password:");
 do{
   ch = getch();
   if(i==0 && ch == 'b')
   {
    continue;
   }
   if(ch == 'b'){
    printf("\b \b");
    i--;
    continue;
   }
   printf("*");
   pass1[i++]=ch;
   }while(ch != '\r');
   pass1[--i]='\0';
   if(strcmpi(pass,pass1)==0){
   printf("\nWelcome ...");
   }
   else
   {
    printf("\nInvalid Password...");
    }
    getch();
    }