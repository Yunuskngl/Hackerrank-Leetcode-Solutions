class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        if sum(gas) < sum(cost): # eğer toplam gaz maliyetten küçükse dönüş yoktur
            return -1
        a = len(gas)  # a = len(gas) oluşturduk
        s = 0
        result = 0
        for i in range(a):
            s += gas[i] - cost[i] 
            if s < 0: 
                s = 0
                result =(i + 1) % a   
        return result