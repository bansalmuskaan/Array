#include<iostream>
using namespace std;
int main()
{
	int n,min,max;
	cout<<"enter the size of the arrry:";
	cin>>n;
	int *arr=new int(n);
	cout<<"enter "<<n<<" items"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	min=max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(min<arr[i])
			min=arr[i];
		if(max>arr[i])
			max=arr[i];
	}
	cout<<"min="<<min<<endl<<"max="<<max;
	return 0;
}