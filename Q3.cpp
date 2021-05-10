#include<iostream>
using namespace std;
int main()
{
	int n,m,c=0;
	cout<<"enter the size of the arrry:";
	cin>>n;
	int *arr=new int(n);
	cout<<"enter the element you want to search:";
	cin>>m;
	cout<<"enter "<<n<<" items"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	for(int i=0;i<n;i++)
	{
		if(m==arr[i])
		{
			cout<<"true";
			c=1;
			break;
		}
	}
	if(c==0)
		cout<<"false";
	return 0;
}