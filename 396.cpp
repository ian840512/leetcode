#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
	        int f0=0,tmp=0;
	        for(int i=0;i<A.size();++i){
	        	f0+=A[i]*i;
	        	tmp+=A[i];
	        }

	        int ans=f0;
	        for(int i=(A.size()-1);i>0;--i){
	        	f0+=tmp;
	        	f0-=A.size()*A[i];
	        	ans=max(ans,f0);
	        }
	        return ans;
    }
};


int main(){
	vector<int> A;
	A.push_back(4);
	A.push_back(3);
	A.push_back(2);
	A.push_back(6);
	Solution s;
	int ans=s.maxRotateFunction(A);
	cout<<ans<<endl;
	return 0;
}