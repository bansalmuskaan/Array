//Find the range of the array. Range = (max -min )

#include<iostream>
using namespace std;
int main()
{
	int n,min,max,r=0;
	cout<<"enter the size of the arrry:";
	cin>>n;
	int *arr=new int(n);
	cout<<"enter "<<n<<" items"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	min=max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	r=max-min;
	cout<<"range of the array = "<<r;
	return 0;
}