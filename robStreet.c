// Copyright 2018 Cocoon Psn.
// Author: Mr_Garfield
// Description：LeetCode198 小偷抢街

vector<int> result;    
int max(int a, int b)
{
    int max = a;
    if(b>a)
        max = b;
    return max;
}
int search(vector<int>& nums, int idex)
{
    if(idex < 0)
        return 0;
    if(result[idex] >=0 )
        return result[idex];
    result[idex] = max(nums[idex]+search(nums, idex-2),search(nums, idex-1));
    return result[idex];
}
    
    
int rob(vector<int>& nums) {
    int len = nums.size();
    result.resize(len);
    for(int i = 0; i < len; i++)
    {
        result[i] = -1;
    }
    return search(nums, len-1);
}