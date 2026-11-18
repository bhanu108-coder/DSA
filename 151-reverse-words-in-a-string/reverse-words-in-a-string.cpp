class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string w,res;
        vector<string> words;

        while (ss >> w) 
            words.push_back(w);
        for (int i=words.size()-1;i>=0;i--) 
        {
            res+= words[i];
            if (i>0) 
            {
                res+= " ";
            }
        }
        return res;
    }
};