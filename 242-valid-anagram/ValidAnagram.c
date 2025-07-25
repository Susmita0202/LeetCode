#include <string.h>
#include <stdbool.h>

bool isAnagram(const char *s, const char *t) {
    if (strlen(s) != strlen(t)) return false;

    int count[26] = {0};

    for (int i = 0; s[i]; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }

    return true;
}
