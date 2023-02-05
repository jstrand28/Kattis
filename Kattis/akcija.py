a=int(input())
c=[]
for i in range(a):
    b=int(input())
    c.append(b)

c.sort(reverse=True)

d=0
p=0
for i in range(len(c)):
    d+=1
    if (d%3==0):
       c[i]=0
       d=0
    p+=c[i]
    
print(p)
