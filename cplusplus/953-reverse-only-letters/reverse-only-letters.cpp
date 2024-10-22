class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j) 
        {
            if(!isalpha(s[i])) 
            {
                i++;
            }
            else if(!isalpha(s[j]))
            {
                j--;
            }
            else 
            {
                char aux; 

                aux = s[i];
                s[i] = s[j];
                s[j] = aux;
                
                i++;
                j--;
            }
        }
        return s;
    }
};