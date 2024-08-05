# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
     def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        if not root:
            return False

        def inorder(node):
            stack, result = [], []
            while stack or node:
                while node:
                    stack.append(node)
                    node = node.left
                node = stack.pop()
                result.append(node.val)
                node = node.right
            return result    

        nums = inorder(root) 
        l, r = 0, len(nums) - 1
        while l < r:
            if nums[l] + nums[r] == k:
                return True
            elif nums[l] + nums[r] < k:
                l += 1
            else:
                r -= 1
        
        return False
