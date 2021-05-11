//output the sum of each subarray

#include<iostream>
using namespace std;
int main()
{
	int n,sum=2,max=0,d=0;
	cout<<"enter the number of array:";
	cin>>n;
	int *a=new int(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	d=a[1]-a[0];
	for(int i=1;i<n;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{	
			if(a[j]-a[i]==d)
			{
				sum++;
			}
			else
			
				d=a[j+1]-a[j];
				
		if(sum>max)
			max=sum;
			
		}
		
		
	}
	cout<<max;
	
	return 0;
}
