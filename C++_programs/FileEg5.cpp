//FileEg5 :- Example of put function
#include<iostream>
#include<fstream>
using namespace std;
int mian()
{
	char str[100];
	int i = 0;
	fstream fs;
	fs.open("Apple.txt",ios::out);
	if(!fs)
	{
		cout<<"File opening failed.";
		return 0;
	}
	else
	{
		cout<<"Enter a string : ";
		cin.getline(str,100);
		while(str[i] != '\0')
		{
			fs.put(str[i]);
			i++;
		}
	}
	fs.close();
	return 0;
}