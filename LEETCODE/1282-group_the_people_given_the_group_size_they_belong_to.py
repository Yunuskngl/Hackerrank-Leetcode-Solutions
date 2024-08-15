#SOLUTION:


class Solution(object):
    def groupThePeople(self, groupSizes):
        
        group_dict = {}  
        for i, size in enumerate(groupSizes):
            if size in group_dict:
                group_dict[size].append(i)
            else:
                group_dict[size] = [i]
            
        result = []
        for size, group in group_dict.items():
            for i in range(0, len(group), size):
                result.append(group[i:i+size])
        return result

                        
        """
        :type groupSizes: List[int]
        :rtype: List[List[int]]
        """
        