class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);  // output vector

        if (k == 0) 
            return ans;  // all zeros

        for (int i = 0; i < n; i++) {
            int sum = 0;
            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    sum += code[(i + j) % n];  // next k elements (circular)
                }
            } 
            else if (k < 0) {
                for (int j = 1; j <= -k; j++) {
                    sum += code[(i - j + n) % n];  // previous |k| elements
                }
            }
            ans[i] = sum;
        }
        return ans;
    }
};
