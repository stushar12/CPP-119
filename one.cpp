#include<bits/stdc++.h>
using namespace std;
   vector<int> nextPermutation(vector<int>& nums) 
    {
        int index=-1;
        int prev=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                index=i;
                break;
            }
        }
        if(index==-1)
            reverse(nums.begin(),nums.end());
        else
        {
            for(int i=n-1;i>=index;i--)
            {
                if(nums[i]>nums[index-1])
                {
                    prev=i;
		    break;
                }
            }
        
        swap(nums[index-1],nums[prev]);
        reverse(nums.begin()+index,nums.end());
        }
	return nums;
    }  

int main()
{
	int n;
	cin>>n;

	vector<int> v;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);						//int arr[]={5,15,10,8,6,12,9,18};
	}

	v=nextPermutation(v);
	for(auto itr:v)
	{
		cout<<itr<<" ";
	}

}
