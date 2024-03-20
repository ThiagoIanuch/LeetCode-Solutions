class Solution {
public:
    int percentageLetter(string s, char letter) {
        double cont = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == letter) {
                cont++;
            }
        }

        return cont / s.size() * 100;
    }
};