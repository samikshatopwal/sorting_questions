#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void display(int arr[],int n)
{
    int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
}
int main()
{
	int arr[50],n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pos,min;
	for(i=0;i<n;i++)
	{
		min=arr[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				pos=j;
			}
		}
		if(pos!=i)
		{
			swap(&arr[i],&arr[pos]);
		}
	}
	display(arr,n);
	return 0;
}

