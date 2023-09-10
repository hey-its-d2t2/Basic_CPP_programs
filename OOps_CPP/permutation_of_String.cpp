#include<iostream>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
long long int count;
using namespace std;
void swap(char* a,char* b){
	char temp;
	temp = *a;
	*a=*b;
	*b=temp;
}
void permutation(char*a ,int first_index,int last_index){
	if(first_index==last_index){
		//Beep(700,800);
		cout<<a<<" \t ";
		count++;
	}
	else{
		for(int i = first_index;i<=last_index;i++){
			swap((a+first_index),(a+i));
			permutation(a,first_index+1,last_index);
			swap((a+first_index),(a+1));
		}
	}
}
int main(){
	//system("color 94");
	char str[30];
	long long int  length;
	cout<<"Enter A Charector String : ";	
	cin>>str;
	length=strlen(str);
	permutation(str, 0,length-1);
	cout<<"\n\n Total Possible Values : "<<count<<endl;
	return 0;
}
