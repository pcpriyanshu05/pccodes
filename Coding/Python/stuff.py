a=int(input())
b=input()
for i in range(0,a):
    for j in range(0,a-i-1):
        print(' ',end='')
    for j in range(0,i+1):
        print(b,end='')
    for j in range(0,a+2):
        print(' ',end='')
    print('|',end='')
    for j in range(0,a+2):
        print(' ',end='')
    for j in range(0,i+1):
        print(b,end='')
    print()

for i in range(0,a):
    for j in range(0,a):
        print(' ',end='')
    for j in range(0,a-i):
        print(b,end='')
    for j in range(0,i):
        print(' ',end='')
    print('  |  ',end='')
    for j in range(0,i):
        print(' ',end='')
    for j in range(0,a-i):
        print(b,end='')
    print()