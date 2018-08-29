// Copyright 2018 Cocoon Psn.
// Author: Mr_Garfield
// LeetCode673 Max sum of increasing subsequence

#include <iostream>
#include <vector>
using namespace std;
// 最大递增子序列和 
int findMaxSumOfLIS(vector<int>& nums) {
    int maxSum = nums[0], n = nums.size();
	if(n == 0)
		return 0;
    vector<int> Sum(nums.begin(), nums.end());
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] <= nums[j]) continue;
            else
				Sum[i] = max(Sum[i], Sum[i]+nums[j]);
        }
    }

	for(int i = 0; i < n; ++i){
		if(Sum[i] > maxSum)
			maxSum = Sum[i];
	}
    return maxSum;
}


int main(void)
{
    int data[] = {1,4,3,3,2,6,7,9,5,3,2,3};
    vector<int> nums(data, data+3);
    int ret = findMaxSumOfLIS(nums);
    printf("%d\n", ret);
    return 0;
}