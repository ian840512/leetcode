#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        nums.push_back(-1);
        for(int i=0;i<nums.size();i++){
        	while(i!=nums[i] && nums[i]!=(-1)){
        		swap(nums[i],nums[nums[i]]);
        	}
        }
        for(int i=0;i<nums.size();i++){
        	if(nums[i]==(-1)){
        		return i;
        	}
        }
        return -1;
    }
};


int main(){
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	Solution s;
	int ans=s.missingNumber(nums);
	cout<<"ans:"<<ans<<endl;
	return 0;
}