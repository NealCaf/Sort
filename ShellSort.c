#include <stdio.h>

void printnums(int nums[], int len)
{
	int i = 0;
	printf("nums = ");
	for(i=0;i<len;i++)
	{
		printf("%d, ", nums[i]);
	}
	printf("\n");
}

void shellsort1(int nums[], int len)
{
	int i = 0, j = 0, k = 0;
	int step = 0;
	int temp = 0;

	for(step=len/2;step>0;step/=2)
	{
		for(i=0;i<step;i++)
		{
			for(j=i+step;j<len;j+=step)
			{
				temp = nums[j];
				for(k=j-step;k>=0&&nums[k]>temp;k-=step)
				{
					nums[k+step] = nums[k];
				}
				nums[k+step] = temp;
			}
		}
	}
}

void shellsort2(int nums[], int len)
{
	int i = 0, j = 0, k = 0;
	int step = 0;
	int temp = 0;

	for(step=len/2;step>0;step/=2)
	{
		for(i=step;i<len;i++)
		{
			temp = nums[i];
			for(k=i-step;k>=0&&nums[k]>temp;k-=step)
			{
				nums[k+step] = nums[k];
			}
			nums[k+step] = temp;
		}
	}
}

int main()
{
	int nums[] = {9, -2, 2, 0, 8, 4, 5, -3, 1};
	int len = 0;

	len = sizeof(nums) / sizeof(int);
	printf("len = %d\n", len);
	shellsort2(nums, len);
	printnums(nums, len);
}
