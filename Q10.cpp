//max till ith

#include<iostream>
using namespace std;
int main()
{
	int n,j=0,max;
	cout<<"enter the number of array:";
	cin>>n;
	int *a=new int(n);
	int *b=new int(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		b[j]=max;
		j++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
