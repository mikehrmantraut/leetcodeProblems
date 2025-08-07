class Solution {
public:
    int maxDifference(string s) {
        map<char,int>m;
        int max = 0, min=101, res = 0;
        for (char c: s)
            m[c]++;
        for (auto it=m.begin(); it!=m.end(); it++)
        {
            if (it->second % 2 == 1 && max < it->second)
                max = it->second;
            else if (it->second % 2 == 0 && min > it->second)
                min = it->second;
            res = max - min;
        }
        return res;
    }
};
