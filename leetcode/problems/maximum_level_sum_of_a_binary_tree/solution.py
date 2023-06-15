class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        resLevel, maxLevelSum = 0, -math.inf
        queue = deque([root])
        level = 0
        while queue:
            level += 1
            n = len(queue)
            sumOfVal = 0
            for _ in range(n):
                curr = queue.popleft()
                sumOfVal += curr.val
                if curr.left:
                    queue.append(curr.left)
                if curr.right:
                    queue.append(curr.right)
            if sumOfVal > maxLevelSum:
                resLevel = level
                maxLevelSum = sumOfVal
        return resLevel