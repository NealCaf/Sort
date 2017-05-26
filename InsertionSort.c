#include <stdio.h>

void printnums(int nums[], int len)
{
	int i = 0;
	printf("nums = ");
	for(i=0;i<len;i++)
	{
		printf("%d, ", nums[i]);
	}
	putchar('\n');
}

void insertionsort(int nums[], int len)
{
	int i = 0, j = 0;
	int temp = 0;

	for(i=1;i<len;i++)
	{
		temp = nums[i];
		for(j=i-1;j>=0&&nums[j]>temp;j--)
		{
			nums[j+1] = nums[j];
		}
		nums[j+1] = temp;
	}
}

int main()
{
	int nums[] = {-1, 2, 0, 4, 9, -3, -2};
	int len = 0;

	len = sizeof(nums) / sizeof(int);
	printf("len = %d\n", len);
	insertionsort(nums, len);
	printnums(nums, len);

	return 0;
}
