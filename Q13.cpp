//output the sum of each subarray

#include<iostream>
using namespace std;
int main()
{
	int n,cnt=0,j;
	cout<<"enter the number of array:";
	cin>>n;
	int *a=new int(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	a[n]=a[-1]=-1;
	j=0;
	while(j<n)
	{
		if(a[j]>a[j-1] && a[j]>a[j+1])
			cnt++;
		j++;
	}
	cout<<cnt;
	
	return 0;
}
