l=eval(input())
b=int(input())
li=[]
if(len(l)==b):
    print(sum(l))
else:
    for i in range(0,b):
        li.append(sum(l[0:i+1])+sum(l[:-b+i:-1]))
print(max(li))        
        