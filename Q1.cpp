//Take input from the user for the  N number of elements and print the entire array after that

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size if the array:";
	cin>>n;
	int a[n];
	cout<<"enter the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<endl<<"print the elements of the array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
