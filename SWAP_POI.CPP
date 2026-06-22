#include<iostream.h>
#include<conio.h>
void swap(int* a, int*b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	clrscr();
	int a = 10;
	int b = 20;

	cout<< " Before Swapping:"<< endl;
	cout<< "a: " << a << "b:" << b << endl;

	swap (&a, &b);
	cout<<"After Swapping: " << endl;
	cout<< "a:" << a << "b:" << b << endl;
	return 0;
}