d={'alpha':[20,30,40],'beta':[30,50,70]}
qn='beta'
l=d.keys()
ln=[]
for i in l:
    ln.append(i)
for i in range(0,len(ln)):
    if(ln[i]==qn):
        s=sum(d[ln[i]])/len(d[ln[i]])
        format_f="{:.2f}".format(s)
        print(format_f)
print(ln)