# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        temp1=None
        temp2=0
        while head is not None:
          temp2=head
          head=head.next
          temp2.next=temp1
          
          temp1=temp2
        return temp1

