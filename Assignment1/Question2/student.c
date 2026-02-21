#include "Student.h"

//Given an array nums of size n, return the majority element.

//The majority element appears more than ⌊n/2⌋ times.
//You may assume the majority element always exists in the array.

//Example 1:
//Input: nums = [3,2,3]
//Output: 3

//Example 2:
//Input: nums = [2,2,1,1,1,2,2]
//Output: 2


int majorityElement(int* nums, int numsSize) {
     // TODO: implement
	int count1 = 0;
	int count2 = 0;
	int num1 = 0;
	int num2 = 0;
	int a = 0;
	int b = 0;
	for(a = 0; a < numsSize; a++)
	{
		num1 = nums[a];
		count1 = 1;
		for(b = a+1; b < numsSize; b++)
		{
			if(nums[b] == num1)
			{count1 = count1+1;}
		}
		if(count2 < count1)
		{
		count2 = count1;
		num2 = num1;
		}
	}

return num2;
}
