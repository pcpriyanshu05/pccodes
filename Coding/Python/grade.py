l=[]
s=int(input("Enter list's size"))
for i in range(0,s):
        n=input("Enter the name")
        t=int(input("Enter the grade"))
        l.extend([[n,t]])
print(l)