clrs = []
count = int(input("Enter the number of colors:"))
print("Enter the colors:")
for x in range(count):
    color = input()
    clrs.append(color)
print("First Color: ",clrs[0]," Last Color: ",clrs[count-1])