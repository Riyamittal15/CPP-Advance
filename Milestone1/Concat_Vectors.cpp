class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert( nums.end(), nums.begin(), nums.end() );
        return nums;
        
        /*
        vector<int> vec(nums.size()*2);
        for(int i=0;i<nums.size();i++){
            vec[i] = nums[i];
            vec[i+nums.size()] = nums[i];
        }
        return vec;
        */
    }
};
