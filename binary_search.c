#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE  100
void main()
{
	int i;
	int * array;
	int temp;
	int min = 0;
	int max = MAX_SIZE-1;
	int mid;
	
	array = (int *)malloc(sizeof(int)*MAX_SIZE);
	
	printf("please enter array\n");
	for(i=0; i<MAX_SIZE; i++){
		scanf("%d",&array[i]);
	}
	
	printf("please input nums\n");
	scanf("%d",&temp);
	
	mid = (min + max)/2;
	while(mid != min && mid != max){
		if(temp > array[mid]){
			min = mid;
		}
		else if(temp < array[mid]){
			max = mid;
		}
		mid = (min + max)/2;
	}

	for(i=mid; i<MAX_SIZE; i++){
		array[i+1] = array[i];
	}
	array[mid] = temp;
	
	return ;
}