#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the arrry:";
	cin>>n;
	int *arr=new int(n);
	int j=n-1;
	cout<<"enter "<<n<<" items"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n && i<=j;i++)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j--;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}