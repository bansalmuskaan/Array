//Given an array which consists of only 0, 1, 2. Sort the array witout using any sorting algorithm

#include<iostream>
using namespace std;
int main()
{
	int n,c1,c2,c3,j=0,k=0;
	cout<<"enter the size of the arrry:";
	cin>>n;
	int *a=new int(n);
	cout<<"enter "<<n<<" items"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	c1=c2=c3=0;
	for(int i=0;i<n;i++)
	{
		if(1==a[i])
			c2++;
		if(0==a[i])
			c1++;
		if(2==a[i])
			c3++;

	}
	for(int i=0;i<c1;i++)
	{
		a[i]=0;
		j++;
	}
	k=j;
	for(int i=j;i<c2+j;i++)
	{
		a[i]=1;
		k++;
	}
	for(int i=k;i<c3+k;i++)
		a[i]=2;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}