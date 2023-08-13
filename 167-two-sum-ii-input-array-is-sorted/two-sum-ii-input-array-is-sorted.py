class Solution(object):
    def twoSum(self, numbers, target):
        """
        :type numbers: List[int]
        :type target: int
        :rtype: List[int]
        """
        countS={}
        myList=[]
        for i in range (0,len(numbers)):
            l=target-numbers[i]
            if(l in countS):
                myList.append(countS[l]+1)
                myList.append(i+1)
            countS[numbers[i]]=i
        return myList