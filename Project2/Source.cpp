#include<iostream>
#include<vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0) { return true; }
        nums[index] *= -1;
    }
    return false;
}
int main()
{
    vector<int>nums = { 1,2,3,4 };
    if (containsDuplicate(nums)) { cout << "Yes"; }
    else { cout << "Nah"; }
}