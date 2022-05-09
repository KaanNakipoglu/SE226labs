import random

#1st solution
def lambdafunc(n):
 f=lambda x:(x-3)/(x*x)
 list=[]
 for a in range(1,n+1):
    list.append(f(a))
 print(sum(list))

n=int(input("Please enter an integer: "))
lambdafunc(n)

#2nd solution
def func2(n):
    if n==0:
        return 1
    else:
        return (((n/(n+2))-10)*func2(n-1))

n=int(input("Please enter an integer: "))
print(func2(n))
print(func2.__doc__)
