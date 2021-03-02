#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int partition(int arr[],int l,int r)
{
	int i=l,j,pivot=arr[r];
	for(j=l;j<r;j++)
	{
		if(arr[j]<pivot)
		{
			swap(&arr[i],&arr[j]);
			i++;
		}
	}
	swap(&arr[i],&arr[j]);
	return i;
}
void randamization(int arr[],int l,int r)
{
	int n,temp;
	n=r-l+1;
	temp=rand()%n;
	swap(&arr[l+temp],&arr[r]);
}
void Quicksort(int arr[],int l,int r)
{
	int pivotindex;
	if(l<r)
	{
	randamization(arr,l,r);
	pivotindex=partition(arr,l,r);
	Quicksort(arr,l,pivotindex-1);
	Quicksort(arr,pivotindex+1,r);
   }
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
	int arr[50],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Quicksort(arr,0,n-1);
	display(arr,n);
}
