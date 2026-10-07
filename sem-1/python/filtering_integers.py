num = []
n = int(input("ENTER THE NUMBER OF ELEMENTS:"))
print("ENTER THE LIST OF INTEGERS:")
for i in range(1,n+1):
    e = int(input())
    if(e>100):
        num.append("OVER")
    else:
        num.append(e)
print("ENTERED LIST:",num)