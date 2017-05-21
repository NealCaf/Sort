#include <stdio.h>

void printarr(int nums[], int len)
{
	int i = 0;

	printf("nums = ");
	for(i=0;i<len;i++)
	{
		printf("%d, ", nums[i]);
	}
	printf("\n");
}

void bubblesort1(int nums[], int len)
{
	int i = 0, j = 0, k = 0;
	int temp = 0;

	for(i=0;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(nums[i]>nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
}

int main()
{
	int nums[] = {3, -1, 5, -2, 0, 7, 4};
	int len = 0;

	len = sizeof(nums) / sizeof(int);
	bubblesort1(nums, len);
	printarr(nums, len);

	return 0;
}
