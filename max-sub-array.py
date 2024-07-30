
nums=[2,-3,5,-1,8,-7,-10]
current_max = 0
overall_max = float('-inf')
for num in nums:
    current_max = max(current_max + num, num)  
    overall_max = max(overall_max, current_max)
        
print(overall_max)
