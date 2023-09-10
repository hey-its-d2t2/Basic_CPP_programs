/* Selection sort*/
#include<iostream>
#define MAX 100
using namespace std;
void SelectionSort(int arr[], int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)//Loop for Passes
	{
		for(j=i+1;j<n;j++)//Loop for steps inside each Pass
		{
			//code for swapping
				if(arr[i]>arr[j])
				{
					temp = arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
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
	SelectionSort(arr,n);	
	return 0;
}

