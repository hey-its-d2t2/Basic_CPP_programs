/* wap in cpp to print the digits of a number in reverse order*/
#include<iostream>
#include<conio.h>
using namespace std;
int reverse(int);
int main()
{
	int input;
	cout<<"Enter a number:";
	cin>>input;
	cout<<"Reversed : "<<reverse(input);
	getch();
	return 0;
}
int reverse(int num)
{
	int reversed = 0, reminder;
	while(num != 0)
	{
		reminder = num % 10;
		reversed = 10 * reversed + reminder;
		num /= 10;
	}
	return reversed;
}
