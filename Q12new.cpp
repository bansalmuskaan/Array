//output the sum of each subarray

#include<iostream>
using namespace std;
int main()
{
	int n,p=0,max,j,cnt;
	cout<<"enter the number of array:";
	cin>>n;
	int *a=new int(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	p=a[1]-a[0];
	max=2;
	j=2;
	cnt=2;
	while(j<n)
	{
		if(p==a[j]-a[j-1])
			cnt++;
		else
		{
			p=a[j]-a[j-1];
			cnt=2;
		}
		if(cnt>max)
			max=cnt;
		j++;
	}
	cout<<max;
	return 0;
}
