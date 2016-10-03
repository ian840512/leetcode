#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map <int,int> mapper;
        for(int i=0;i<nums.size();++i){
        	if(mapper.find(nums[i])!=mapper.end() && i-mapper[nums[i]]<=k){
        		return true;
        	}
        	else{
        		mapper[nums[i]]=i;
        	}
        }
        return false;
    }
};

int main(){
	vector <int>nums;
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(1);
	Solution s;
	bool ans=s.containsNearbyDuplicate(nums,1);
	cout<<ans<<endl;
	return 0;
}