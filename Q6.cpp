//Given an number N. find the number of occurrences of n in the array

#include<iostream>
using namespace std;
int main()
{
	int n,f=0,num;
	cout<<"enter the size of the arrry:";
	cin>>n;
	int *arr=new int(n);
	cout<<"enter "<<n<<" items"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"enter the number we want to find out the occurrences:";
	cin>>num;
	for(int i=0;i<n;i++)
	{
		if(num==arr[i])
			f++;
	}
	cout<<endl<<f;
	return 0;
}