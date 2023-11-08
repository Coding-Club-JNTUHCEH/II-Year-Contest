# Approach -> Given, the positions of two hunters and a rabbit. We need to find absolute value of distance b/w hunters and rabbit, and compare them.
# Read input integers
x, y, z = input().split()
x = int(x)
y = int(y)
z = int(z)

# Calculate distances
a = abs(x - z)
b = abs(y - z)

# Compare distances and print the result
if a == b:
    print('C')
elif a > b:
    print('B')
else:
    print('A')
