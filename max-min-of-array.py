arr= [1,5,8,9,3,6,3,7,8,5,0,11]

min=arr[0]
max=arr[len(arr)-1]

for i in arr:
    if i < min:
        min = i
    if i > max:
        max=i

print("Min",min)
print("Max",max)