class Solution {
public:
    bool isAnagram(string str1, string str2) {
           if (str1.length() != str2.length())
            return false;

        int freq[52] = {0};
        
        for (int i = 0; i < str1.length(); i++) {
            if (isupper(str1[i])) {
                freq[str1[i] - 'A']++;
            } else if (islower(str1[i])) {
                freq[str1[i] - 'a' + 26]++;
            }
        }
        
        for (int i = 0; i < str2.length(); i++) {
            if (isupper(str2[i])) {
                freq[str2[i] - 'A']--;
            } else if (islower(str2[i])) {
                freq[str2[i] - 'a' + 26]--;
            }
        }

        for (int i = 0; i < 52; i++) {
            if (freq[i] != 0)
                return false;
        }
        
        return true;
    }
};