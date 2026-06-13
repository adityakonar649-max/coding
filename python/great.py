#A program to find the greatest number among 3 numbers
a=int(input("Enter 1st number : "))
b=int(input("Enter 2nd number : "))
c=int(input("Enter 3rd number : "))
if(a>b):
    if(a>c):print("The biggest number is : ",a)
    else : print("The biggest number is : ",c)
else:
    if(b>c): print("The biggest number is : ",b)
    else:print("The biggest number is : ",c)
