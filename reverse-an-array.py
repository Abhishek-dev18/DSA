arr= [1,3,5,7,9,10,1,2,3,4]

start=0
end=len(arr)-1

while(start < end):
    temp = arr[start]
    arr[start] = arr[end]
    arr[end] = temp
    start+=1
    end-=1

print(arr)