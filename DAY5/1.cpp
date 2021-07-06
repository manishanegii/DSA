#include <bits/stdc++.h> 
using namespace std;

class NumArray {
public:
    vector<int> pairSum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            pairSum.push_back(sum);
        }
    }
    int sumRange(int left, int right) {
        if(left == 0){
            return pairSum[right];
        }
        return pairSum[right] - pairSum[left-1];
    }
};
