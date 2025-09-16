arry = "".join(input().split())
k = int(input())
l = len(arry)
n = len(arry)//k
lst = []
if n%2 == 0:
    r = len(arry)%k
    s1 = arry[l-1-k:]
    s1[::-1]
    s = s1 + arry[:l-1-k]

else :
    arry[::-1]
    r = len(arry)%k
    s1 = arry[l-1-k:]
    s1[::-1]
    s = s1 + arry[:l-1-k]

for i in range(n):
    lst.append(s[i])


print(lst)