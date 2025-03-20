import random
import string


d = dict()
print("Choose 5 letters (lowercase only) and assign 3 replacement characters to each.")
for i in range(0,5):
    x = input("Enter a lowercase character:\n")
    while x in d.keys() or len(x) > 1 or x.islower() == False:
        x = input("Enter a lowercase character:\n")
    d[x] = set()
    x1 = input("Enter a replacement for " + x + ":\n")
    d[x].add(x1)
    x2 = input("Enter a replacement for " + x + ":\n")
    d[x].add(x2)
    x3 = input("Enter a replacement for " + x + ":\n")
    d[x].add(x3)

passwords = []
for _ in range(5):
    password = ''.join(random.choices(string.ascii_lowercase, k=15))
    passwords.append(password)

strongPasswords = []
weakPasswords = []
for p in passwords:
    count = 0
    new = ""
    for i in p:
        if i in d.keys():
            i = random.choice(list(d[i]))
            new += i
            count += 1
        else:
            new += i
    if count > 3:
        strongPasswords.append(new)
    else:
        weakPasswords.append(new)

print("Generated Passwords:")
print("Strong Passwords:")
print(strongPasswords)
print("Weak Passwords:")
print(weakPasswords)




