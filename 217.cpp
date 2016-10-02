#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        	map<int,int> mapper;
        	for(int i=0;i<nums.size();++i){
        		if(mapper.find(nums[i])!=mapper.end()){
        			return true;
        		}
        		else{
        			mapper[nums[i]]=1;
        		}
        	}
        	return false;
    }
};

int main(){
	vector<int>nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(4);
	nums.push_back(2);
	nums.push_back(3);
	Solution s;
	bool ans=s.containsDuplicate(nums);
	cout<<ans<<endl;
	return 0;
}