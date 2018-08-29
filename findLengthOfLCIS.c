// Copyright 2018 Cocoon Psn.
// Author: Mr_Garfield
// LeetCode674 Longest continous increasing subsequence


int findLengthOfLCIS(vector<int>& nums) {
    if(nums.size() == 0)
        return 0;
    int indexLength = 1,maxLength = 1, n = nums.size();
    for (int i = 1; i < n; ++i) {
        if (nums[i] > nums[i-1]) 
        {
            indexLength++;
            maxLength = max(maxLength, indexLength);
        }
        else 
            indexLength = 1;
    }
    return maxLength;
}