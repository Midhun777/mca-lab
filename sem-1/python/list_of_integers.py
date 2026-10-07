list1 = []
list2 = []
m = int(input("ENTER THE LIMIT OF LIST1:"))
print("Enter the elements")
for i in range(0,m):
    value = int(input())
    list1.append(value)
n = int(input("ENTER THE LIMIT OF LIST2:"))
print("Enter the elements")
for i in range(0,n):
    value = int(input())
    list2.append(value)
print(list1,list2)
if len(list1) == len(list2):
    print(" Both List1 and List2 are of the same length")
else:
    print(" Both List1 and List2 are NOT of the same length")
if sum(list1) == sum(list2):
    print(" The Sum of both List1 and List2 are same")
else:
    print(" The Sum of both List1 and List2 are NOT same")
list3 = [each for each in list1 if each in list2]
print("Same Members are:",list3)