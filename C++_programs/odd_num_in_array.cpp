/* Wap in cpp to find odd numbers in an arry */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,arr[n],i,j;
	cout<<"Enter  total number of element :";
	cin>>n;
	cout<<"Now,\n Enter elements one by one:-"<<endl;
	for(i=0;i<n;i++){
		cout<<"["<<i+1<<".]-> ";
		cin>>arr[i];
	}
	cout<<"\n Odd numbers in array : ";
	for(j=0;j<n;j++){
		if(arr[j]%2==1)
			cout<<arr[j]<<" ";
	}
	getch();
	return 0;
}
