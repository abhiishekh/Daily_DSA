// Question reference: https://leetcode.com/problems/two-sum/
// Time complexity: O(n^2)
// Space complexity: O(1)
// This is a brute force solution. We can optimize this solution by using a hashmap.


#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;


}