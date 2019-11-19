// https://www.hackerearth.com/practice/algorithms/sorting/counting-sort/tutorial/

#include<stdio.h>
#include<stdlib.h>



int max_number(int *arr,int end)
{
	int i,max;
	max=arr[0];
	for(i=1;i<end;i++)
		if(max < arr[i])
			max=arr[i];
return max;
}


void counting_sort(int *arr,int start, int end)
{
	int temp,sorted_array[end+1],i,j;
	// First, find the maximum value in arr[]
	int max=max_number(arr,end);

	// Initialize the elements of count[] with 0
	int *count=(int *)calloc((max+1),sizeof(int));

	
	// Store the frequencies of each distinct element of arr[],
    // by mapping its value as the index of count[] array
	for(i=0;i<=end;i++)
	count[arr[i]]++;



	for(i=0,j=0;i<max+1;i++)
	{
		temp=count[i];
		// count stores which element occurs how many times,
        // Add i in sorted_Array[] according to the number of times i occured in arr[]
		while(temp--)
			sorted_array[j++]=i;
	


	}
	
	
printf("sorted array\n");
	for(i=0;i<6;i++)
		printf("%d ",sorted_array[i]);


}





main()
{
	int arr[]={10,7,8,9,1,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,j;

	counting_sort(arr,0,n-1);


//	printf("sorted array\n");
//	for(i=0;i<6;i++)
//		printf("%d ",arr[i]);


}
