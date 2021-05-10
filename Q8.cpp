//Move all the negative elements to one side of the array

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of the arrry:";
	cin>>n;
	int *a=new int(n);
	cout<<"enter "<<n<<" items"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>0)                //if we want to shift left side then a[j]>0 and if right the a[j]<0
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}