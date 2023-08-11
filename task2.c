#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

void main(void)
{
	
	u8 *ptr;
	u8 temp;
	u32 counter_1, counter_2;
	u32 size;
	
	printf("pleasse enter the number of numbers: ");
	scanf("%d",&size);
	
	ptr = (u8*) malloc(sizeof(size));
	 
	for(counter_1=0; counter_1<size;counter_1++)
	{
		printf("please enter number %d: ", counter_1+1);
		scanf("%d",& ptr[counter_1]);		
	}
	
	for(counter_1=0; counter_1<size-1;counter_1++)
	{
		
		for(counter_2=0; counter_2<size-counter_1-1;counter_2++)
		{
			if(ptr[counter_2]>ptr[counter_2+1])
				temp=ptr[counter_2+1];
				ptr[counter_2+1] = ptr[counter_2];
				ptr[counter_2] = temp; 
		}
		
	}
printf("values after the sorting:\n");
for(counter_1=0; counter_1<size;counter_1++)
{
	printf("%d", ptr[counter_1]);
}
	
}