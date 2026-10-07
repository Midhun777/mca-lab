sentence = input("ENTER THE SENTENCE:")
words = sentence.split()
counts = dict()
for word in words:
    if word in counts:
        counts[word] += 1
    else:
        counts[word] = 1
print(counts)