class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0, j = 0;
        for (int i = 0, n = g.size(); i < n; ++i){
            int need = g[i];
            for (; j < s.size() && s[j] < need; ++j);
            if(j == s.size()) break;
            count++;
            j++;
        }
        return count;
    }
};
