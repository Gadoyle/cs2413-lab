#include "two_sum.h"

int two_sum(const int* nums, int n, int target, int* out_i, int* out_j) {
	int check = 0;
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
    // TODO: implement Two Sum.
    // Requirements:
    //  - find i < j such that nums[i] + nums[j] == target
    //  - store indices in *out_i and *out_j
    //  - return 1 if found; otherwise return 0
<<<<<<< HEAD
    for (a = 0; a < n-1; a++)
    {
	for (b = a+1; b < n; b++)
	{
		if(nums[a] + nums[b] == target)
		{
			i = a;
			j = b;
			check = 1;
		}
	}
    }

    *out_i=i;
    *out_j=j;
    if (check == 1)
	{return 1;}
    else
        {return 0;}
=======
    // //////
    return 0;
>>>>>>> 4c8507e0bad4b6ecb925b00846d1e1cea0e8d9c3
}

//think about the time complexity and space complexity of your solution
