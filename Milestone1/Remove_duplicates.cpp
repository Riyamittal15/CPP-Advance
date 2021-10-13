class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if (n==0 || n==1)
        return n;

    int j = 0;
    for (int i=0; i < n-1; i++)
        if (nums[i] != nums[i+1])
        {
            //cout<<nums[j++];
            nums[j++] = nums[i];
        }
            
            
        //cout<<j<<" ";
 
    nums[j] = nums[n-1];
 
    return j+1;
        }
};
