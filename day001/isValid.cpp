    bool isValid(string word) {
        if (word.size() < 3) return false;
        string a = "AEIOUaeiou";
        string b = "QWRTYPSDFGHJKLZXCVBNMqwrtypsdfghjklzxcvbnm";
        int c = 0, v = 0;
        for (char d: word)
        {
            if (a.find(d) != std::string::npos) c++;
            else if (b.find(d) != std::string::npos) v++;
            if (d < 48 || d > 122 || (d>57 && d<65)) return false;
        }
        if (c == 0 || v == 0) return false;
        return true;
    }
