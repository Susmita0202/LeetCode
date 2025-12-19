int beautySum(char* s) {
    int ans = 0;
    for (int i = 0; s[i + 1]; i++){
        int tab[26] = {0};
        tab[s[i] - 'a']++;
        for (int j = i + 1; s[j]; j++){
            tab[s[j] - 'a']++;
            int min = INT_MAX, max = INT_MIN;
            for (int k = 0; k < 26; k++){
                if (tab[k] && min > tab[k]) min = tab[k];
                if (tab[k] && max < tab[k]) max = tab[k];
            }
            ans += (max - min);
        }
    }
    return ans;
}
