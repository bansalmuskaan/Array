#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the arrry:";
	cin>>n;
	int *arr=new int(n);
	cout<<"enter"<<n<<"items"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}