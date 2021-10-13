class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*sort(nums.begin(), nums.end());
		
		// count variable to count the occurrences
        int count = 1;
        int size = nums.size();
		
		// if size is one or two return the first element ( as per constraints that there is always one element present with more occurrences )
        if(size == 1 || size == 2){
            return nums[0];
        }
		
		// iterate over the array ( same elements will be together due to sorting )
        for(int i = 0; i < size; i++){
           if(nums[i] == nums[i+1]){
               count++;
           }else{
			   // check if size of count is more than half of the size of array
               if(count > (size/2)){
                   return nums[i];
               }
               count = 1;
           }
        }
        
        return -1;*/
        
        
        
        int maj_index = 0, count = 1;
        int size = nums.size();
    for (int i = 1; i < size; i++) {
        if (nums[maj_index] == nums[i])
            count++;
        else
            count--;
        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    return nums[maj_index];
    }
};
