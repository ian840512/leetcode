#include <cstdio>
#include <vector>
#include <cstring>
#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int count=0;
    	int len=nums.size();
    	for(int i=0;i<len;++i){
    		if(nums.at(i)==0){
    			nums.erase(nums.begin()+i);
    			nums.push_back(0);
    			--i;
    			--len;
    		}
    	}
    }
};

int main(){
	vector <int> nums;
	nums.push_back(0);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(12);
	Solution s;
	s.moveZeroes(nums);
	for(int i=0;i<nums.size();++i){
		cout<<nums.at(i)<<endl;
	}
	return 0;
}