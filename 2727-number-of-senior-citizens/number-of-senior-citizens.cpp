class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int res = 0;
        for (const std::string& detail : details) {
            int age = (detail[11] - '0') * 10 + (detail[12] - '0');
            if (age > 60) {
                res += 1;
            }
        }
        return res;
    }
};