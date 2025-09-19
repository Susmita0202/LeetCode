int longestConsecutive(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    unsigned MOD = 4 * numsSize;
    int set[MOD], hash, uniq[numsSize], uniqn = 0;
    memset(set, 0x7f, sizeof set);
    int INF = set[0];
    #define HASH(n) ((unsigned)(n) % MOD)
    #define PROBE(hash, n) {int step = 1; while (set[hash] != INF && set[hash] != (n)) hash = (hash + step++) % MOD;}
    for (int i = 0; i < numsSize; i++) {
        int hash = HASH(nums[i]);
        PROBE(hash, nums[i]);
        if (set[hash] == INF) uniq[uniqn++] = nums[i];
        set[hash] = nums[i];
    }
    int best = 0;
    for (int i = 0; i < uniqn; i++) {
        int hash = HASH(uniq[i] - 1);
        PROBE(hash, uniq[i] - 1);
        if (set[hash] == INF) {
            int len = 0;
            for (int j = uniq[i]; true; j++, len++) {
                hash = HASH(j);
                PROBE(hash, j);
                if (set[hash] == INF) break;
            }
            if (len > best) best = len;
        }
    }
    return best;
}
