/*wap in cpp to count the digits in a number */
#include<iostream>
#include<conio.h>
using namespace std;
int count(int);
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"Total Digits  : "<<count(num);
	getch();
	return 0;
}
int count(int num)
{
	int count = 0, reminder;
	while(num != 0)
	{
		reminder = num % 10;
		count++;
		num /= 10;
	}
	return count;
}
