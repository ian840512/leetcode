#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    	int n = nums.size();
    	k%=n;
    	int count=0;
    	for(int i=n-k;i<n;++i){
    		int tmp=nums[i];
    		nums.erase(nums.begin()+i);
    		nums.insert(nums.begin()+count,tmp);
    		count++;
    	}
    }
};



int main(){
	vector<int>nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	Solution s;
	s.rotate(nums,8);
	for(int i=0 ;i < nums.size() ; ++i ){
		cout<<nums[i]<<endl;
	}
	return 0;
}