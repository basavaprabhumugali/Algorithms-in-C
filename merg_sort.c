//  https://www.tutorialspoint.com/data_structures_algorithms/merge_sort_program_in_c.htm


#include<stdio.h>

int a[10];
int b[10];

void merge(int low,int mid,int high)
{
	int l1,l2,i;
	
	for(l1=low,l2=mid+1,i=low; l1<=mid && l2<=high ;i++)
		if(a[l1] <= a[l2] )
			b[i]=a[l1++];
		else
			b[i]=a[l2++];
	
	while(l2 <= high)
		b[i++]=a[l2++];

	while(l1 <= mid)
		b[i++]=a[l1++];

	for(i=low;i<=high;i++)
		a[i]=b[i];


}



void sort(int low, int high)
{
	int mid;

	if(low < high)
	{
		mid=(low+high)/2;
		sort(low,mid);	
		sort(mid+1,high);
		
		merge(low,mid,high);
	}
	else
	return;
	


}

int main()
{
	int i,j;
	printf("enter the array elements\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	sort(0,10);

	printf("sorted elements \n");
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);


	


}

