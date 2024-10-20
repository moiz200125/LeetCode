#include <unordered_set>

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_set<int> mySet;

       // Insert all elements of the vector into the set
        for (int num : nums) {
            if (num > 0) 
            { // We only care about positive integers
                mySet.insert(num);
            }
        }

        int missing = 1;
        while (mySet.find(missing) != mySet.end()) {
            missing++;
        }

        return missing; // Return the first missing positive intege
    }
};