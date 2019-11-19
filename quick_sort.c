// https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/tutorial/

#include<stdio.h>

void swap(int *arr1,int *arr2)
{
// printf("3  \n");
	*arr1=*arr1+*arr2-(*arr2=*arr1);

}

int partiation(int *arr,int start,int end)
{
	int j,i=start+1;
	int pivot=arr[start];
// printf("1  \n");
	for(j=start+1;j<=end;j++)
	{
		if(pivot > arr[j])
		{
			swap(&arr[i],&arr[j]);
			i++;

		}
		
	}
// swap pivot item into its perfect place
// printf("2  \n");
	swap(&arr[start],&arr[i-1]);       // i-1 is perfect place 

	return i-1;

}




void quick_sort(int *arr,int start, int end)
{
	if(start < end){
		int pos_piv=partiation(arr,start,end);

		quick_sort(arr,start,pos_piv-1);
		quick_sort(arr,pos_piv+1,end);
	}

}




main()
{
	int arr[]={10,7,8,9,1,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j;

	quick_sort(arr,0,n-1);


printf("sorted array\n");
	for(i=0;i<6;i++)
		printf("%d ",arr[i]);


}
