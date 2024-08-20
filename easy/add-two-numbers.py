# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    def addTwoNumbers(self, l1:ListNode, l2:ListNode):
        if not l1 and not l2:
            return None
        
        total = (l1.val + l2.val)

        if total >= 10:
            next_node = self.addTwoNumbers(ListNode(1), self.addTwoNumbers(l1.next, l2.next))
            return ListNode(total % 10, next_node)
        else:
            next_node = self.addTwoNumbers(l1.next, l2.next)
            return ListNode(total, next_node)

def build(p1,p2,p3):
    listNone = ListNode(p1,ListNode(p2,ListNode(p3)))
    return listNone


result = Solution().addTwoNumbers(build(2,4,3), build(5,6,4))

print(result.val)
print(result.next.val)
print(result.next.next.val)
