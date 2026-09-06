class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int freq[101] = {};

        for (int x : nums) {
            freq[x]++;
        }

        int sum = 0;

        for (int x : nums) {
            if (freq[x] == 1) {
                sum += x;
            }
        }

        return sum;
    }
};