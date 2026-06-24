
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main(){char str[100]; char *p=str; clrscr(); cin>>str; int len=0; while(*(p+len)!='\0') len++; cout<<len; getch();}
