# from itertools import permutations 
# perm = permutations([1, 2, 3]) 
# for i in list(perm): 
# 	print (i) 
from itertools import permutations
n=int(input("Enter the number"))
p=permutations([1,3,2])
print(p)
q=[]
for i in list(p):
    q.append(i)
print(q)
r=[]
for i in q:
    if sum(i)!=n:
        r.append(i)
print(r)