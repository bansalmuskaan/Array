//output the sum of each subarray

#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter the number of array:";
	cin>>n;
	int *a=new int(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		{
			sum=sum+a[j];
			cout<<sum<<" ";
			
		}
		
	}
	
	return 0;
}
