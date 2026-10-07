word = input("ENTER THE WORD:")
vowels = ['a', 'e', 'i', 'o', 'u']
wordvowels = []
for x in word:
    if(x in vowels and x not in wordvowels):
        wordvowels.append(x)
print("Vowels in ", word," are:",wordvowels)