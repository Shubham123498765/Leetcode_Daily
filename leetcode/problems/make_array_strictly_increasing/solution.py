class Solution:
    def makeArrayIncreasing(self, a: List[int], b: List[int]) -> int:
        b.sort()
        
        @lru_cache(maxsize=None)
        def find(index = 0, past=-inf):
            if index == len(a):
                return 0
            
            res = inf
            if a[index] > past:
                res = find(index + 1, a[index])
            
            new_index = bisect_right(b, past)
            if new_index < len(b):
                res = min(res, 1 + find(index + 1, b[new_index]))
                
            return res
        
        res = find()
        return res if res != inf else -1
                
            