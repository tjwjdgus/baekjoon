n=int(input())
a=list(map(int, input().split()))
b=list(map(int, input().split()))

a.sort()
sum=0
for i in range(0,n):
    sum=sum+a[i]*max(b)
    b.pop(b.index(max(b)))
    
print(sum)
