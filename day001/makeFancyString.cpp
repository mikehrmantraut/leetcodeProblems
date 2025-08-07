class Solution {
public:
    string makeFancyString(string s) {
        int c;
        for (int i=0;i<s.size()- 1;i++)
        {
            if (s[i] == s[i + 1])
            {
                c = 0;
                for (int j = i + 1; j<s.size() && s[j] == s[i]; j++) c++;
                if (c >= 2) s.erase(i, c - 1);
            }
        }
        return s;
    }
};
