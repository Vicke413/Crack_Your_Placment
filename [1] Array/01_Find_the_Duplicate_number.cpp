#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

int n=nums.size();
set<int>non_duplicates;

        for(int i=0;i<n;i++)
        {
            int initial_size=non_duplicates.size();
            non_duplicates.insert(nums[i]);
            int last_size=non_duplicates.size();

            if(last_size==initial_size)
            return nums[i];
        }

        return -1;

        TC-O(N)
        SC-O(N)

    }
};



*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

    int s=0;
    int f=0;

    do{
        s=nums[s];
        f=nums[nums[f]];
    }
    while(s!=f);
    


        s=0;
        while(s!=f)
        {
            s=nums[s];
            f=nums[f];
        }
    
    return s;
    }
};

// TC-O(N)
// SC-O(1)

