class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        for (int i = 1; i <= n; ++i)
            nums.push_back(i);

        int fact = 1;
        for (int i = 1; i < n; ++i)
            fact *= i;

        --k;  // convert to 0-based index
        string result;

        while (!nums.empty()) {
            int index = k / fact;
            result += to_string(nums[index]);
            nums.erase(nums.begin() + index);

            if (nums.empty()) break;
            k %= fact;
            fact /= nums.size();  // (n-1)!
        }

        return result;
    }
};
