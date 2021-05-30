void nextPermutation(vector<int>& nums) 
    {
         int index=-1;
        int prev=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i])
            {
                index=i;
                break;
            }
        }
        if(index==-1)
            reverse(nums.begin(),nums.end());
        else
        {
            for(int i=n-1;i>index;i--)
            {
                if(nums[i]>nums[index])
                {
                    prev=i;
		    break;
                }
            }
        
        swap(nums[index],nums[prev]);
        reverse(nums.begin()+index+1,nums.end());
        }
    }
