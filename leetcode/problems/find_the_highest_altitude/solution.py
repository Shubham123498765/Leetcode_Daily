class Solution:
         def largestAltitude(self, A):
                return max(0, max(accumulate(A)))