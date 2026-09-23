class Solution {
public:
    string reverseWords(string s){
        string word;
        stringstream ss(s);
        string ans;

        while(ss >> word) {
             // ek-ek word milega

             reverse(word.begin(), word.end());
             ans = ans + word + " ";
            }

         ans.pop_back();

        return ans;


        
    }
};