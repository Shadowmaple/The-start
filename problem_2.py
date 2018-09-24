n=input()
a=n
n1=0
n2=1
n3=0
while a>0:
    n3=n1+n2
    n1=n2
    n2=n3
    a=a-1
print(n1)
