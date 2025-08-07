class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> _m;
        int max = -2;
        for(int i:arr) _m[i]++;
        for (auto it=_m.begin(); it != _m.end(); it++)
            if (it->first == it->second)
                if (it->first > max)
                    max = it->first;
        if (max == -2) return -1;
        else return max;
    }
};
