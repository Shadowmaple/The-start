n=input()
a=n
b=0
c=1
while a>0:
    b=2*a-1
    d=c
    while d>1:
        print(" "),
        d=d-1
    while b>0:
        print('*'),
        b=b-1
    print("")
    c=c+1
    a=a-1          
