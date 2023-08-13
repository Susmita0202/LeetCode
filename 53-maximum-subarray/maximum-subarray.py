class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_sum=nums[0]
        cursum=0
        for i in nums:
            if(cursum<0):
                cursum=0
            cursum+=i
            max_sum=max(max_sum,cursum)
        return max_sum