#include<iostream>
#include<vector>
using namespace std;


int singleNumber(vector<int>&nums){
    int count = 0,i;
    for(i =0;i<nums.size();i++){
        count =0;
        for(int j=0;j<nums.size();j++){
            if (nums[i]==nums[j]){
               count++;
            }
        }
        if(count == 1)
            break;
    }
    return nums[i];

}
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    printf("%d", singleNumber(nums));
}