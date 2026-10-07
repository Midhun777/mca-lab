names = []
acount = 0
n = int(input("ENTER THE NUMBER OF FIRST NAMES:"))
print("ENTER THE NAMES:")
for i in range(1,n+1):
    name = input()
    names.append(name)
for name in names:
    acount += name.lower().count('a')
print("Number of a : ",acount)
