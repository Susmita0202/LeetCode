class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         std::unordered_set<int> num_set(nums.begin(), nums.end()); // Use unordered_set instead of set

        int longestStreak = 0;

        for (int num : num_set) {
            if (!num_set.count(num - 1)) { // Use count method instead of contains
                int currentNum = num;
                int currentStreak = 1;

                while (num_set.count(currentNum + 1)) { // Use count method instead of contains
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = std::max(longestStreak, currentStreak); // Use std::max instead of Math.max
            }
        }

        return longestStreak;
   
    }
};