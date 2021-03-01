#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int partition(int a[],int l,int h)
{
	int pivot=a[h];
	int i=l-1;
	int j=l;
	for(j=l;j<h;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[h]);
	return i+1;
}
void quicksort(int a[],int l,int h)
{
	int pivot;
	if(l<h)
	{
		pivot=partition(a,l,h);
		quicksort(a,l,pivot-1);
		quicksort(a,pivot+1,h);
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[50],n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
    }
    quicksort(a,0,n-1);
    display(a,n);
    return 0;
}
