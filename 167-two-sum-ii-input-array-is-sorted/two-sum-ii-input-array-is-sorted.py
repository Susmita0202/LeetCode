class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        myList = []
        i = 0
        j = len(numbers) - 1  # Start from the last index
        while i < j:  # Use a loop condition to prevent going beyond the middle
            if numbers[i] + numbers[j] > target:
                j -= 1
            elif numbers[i] + numbers[j] < target:
                i += 1
            else:
                myList.append(i + 1)
                myList.append(j + 1)
                break  # Stop the loop when a solution is found
        return myList