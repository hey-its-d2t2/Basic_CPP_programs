#include<iostream>
#define MAX 100
using namespace std;
void BubbleSort(int arr[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)//Loop for Passes
	{
		for(j=0;j<n-i-1;j++)//Loop for steps inside each Pass
		{
			//code for swapping
				if(arr[j]>arr[j+1])
				{
					temp = arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
		}
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
	BubbleSort(arr,n);	
	return 0;
}

