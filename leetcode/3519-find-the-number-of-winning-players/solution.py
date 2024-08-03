from typing import List
from collections import defaultdict

class Solution:
    def winningPlayerCount(self, n: int, pick: List[List[int]]) -> int:
        player_picks = [defaultdict(int) for _ in range(n)]
        
        def increment_count(player, color):
            player_picks[player][color] += 1

        for player, color in pick:
            increment_count(player, color)
        
        def check_win(player_index):
            return any(count > player_index for count in player_picks[player_index].values())
        
        winners = sum(1 for i in range(n) if check_win(i))
        
        return winners

