class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word1Return, word2Return;
        
        for(int i = 0; i < word1.size(); i++) {
            word1Return += word1[i];
        }
        for(int i = 0; i < word2.size(); i++) {
            
            word2Return += word2[i];
        }

        if(word1Return == word2Return) {
            return true;
        }
        else {
            return false;
        }
    }
};