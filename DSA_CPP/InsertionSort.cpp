/* Selection sort*/
#include<iostream>
#define MAX 100
using namespace std;
void InsertionSort(int arr[], int n)
{
	int i,j,key;
	for(i=1;i<n-1;i++)//Loop for Passes
	{
		 key =arr[i];
		for(j=i-1;(j>0&&arr[j]>key);j--)//Loop for steps inside each Pass
			arr[j+1]=arr[j];
		arr[j+1]=key;
	
	}
	//Printing Sorted Array
	cout<<"\n Soirted Array Elements Are:-" <<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
}
int main(){
	int n,i,arr[MAX];
	//Inpiuting The Array Elemrnts
	cout<<"\nEnter Total No of Elements : ";
	cin>>n;
	cout<<"Now Enter Elements one by one: "<<endl;
	for(i=0;i<n;i++){
		cout<<"["<<i+1<<"]   ";
		cin>>arr[i];	
	}
	//Printing the Given Elements
	cout<<"\n The Given Elements are : "<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	//Function call To Bubble Sorting
	InsertionSort(arr,n);	
	return 0;
}

