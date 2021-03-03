#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
/* void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
*/
void median(int arr[],int n)
{
	float temp;
	if(n%2==1)
	{
		cout<<arr[n/2];
	}
	else
	{
		temp=(arr[n/2]+arr[(n/2)-1]);
		cout<<(temp/2);
	}
}
int main()
{
	int n,arr[50],i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
	// display(arr,n);
	median(arr,n);
	return 0;
}
