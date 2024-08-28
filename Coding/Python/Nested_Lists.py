if __name__ == '__main__':
    l=[]
    for _ in range(int(input())):
        name = input()
        score = float(input())
        l.append([name,score])
    print(l)
    sl=[]
    for i in range(0,len(l)):
        sl.append(l[i][1])
    print(sl)
    st=[]
    for i in sl:
        if i not in st:
            st.append(i)
    print(st)
    st.sort()
    print(st)
    t=st[1]
    sf=[]
    for i in range(0,len(l)):
        if(l[i][1]==t):
            sf.append(l[i][0])
    print(sf)
    sf.sort()
    for i in sf:
        print(i)
