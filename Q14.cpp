#include<iostream>
#include<climits>
using namespace std;
int main()
{
	cout<<"hello"<<endl;
	int n,minn;
	cout<<"enter the number of array:";
	cin>>n;
	int *a=new int(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	const int N=1e6+6;
	int d[N];
	for(int i=0;i<N;i++)
	{
		d[i]=-1;
	}
	minn=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(d[a[i]]!=-1)
			minn=min(minn,d[a[i]]);
		else
			d[a[i]]=i;
	}
	if(minn==INT_MAX)
		cout<<"-1";
	else
		cout<<minn;
	
	return 0;
}
