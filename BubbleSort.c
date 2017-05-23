#include <stdio.h>

void myswap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

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

	for(i=0;i<len;i++)
	{
		for(j=1;j<len-i;j++)
		{
			if(nums[j-1]>nums[j])
			{
				myswap(&nums[j-1], &nums[j]);
			}
		}
	}
}

void bubblesort2(int nums[], int len)
{
	int i = 0, j = 0;
	int flag = 1;

	while(flag)
	{
		flag = 0;
		for(j=1;j<len-i;j++)
		{
			if(nums[j-1]>nums[j])
			{
				myswap(&nums[j-1], &nums[j]);
				flag = 1;
			}
		}
		i++;
	}
}

void bubblesort3(int nums[], int len)
{
	int i = 0, j = 0;
	int flag = 0;

	for(i=0;i<len;i++)
	{
		for(j=1;j<len-flag;j++)
		{
			if(nums[j-1]>nums[j])
			{
				myswap(&nums[j-1], &nums[j]);
				flag = j;
			}
		}
	}
}

int main()
{
	int nums[] = {3, -1, 5, -2, 0, 7, 4};
	int len = 0;

	len = sizeof(nums) / sizeof(int);
	bubblesort3(nums, len);
	printarr(nums, len);

	return 0;
}
