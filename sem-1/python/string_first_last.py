string = input("ENTER STRING")
n = len(string)
first = string[0]
last = string[n-1]
mod_str = last + string[1:n-2] + first
print("Modified String:",mod_str)