from builtins import print

valoresX = [-3, -2, -1, 0, 1, 2, 3]


valoresY = []
for i in valoresX:
    valoresY.append(i**2)
print(valoresY)

####################################################

valoresY = [i**2 for i in valoresX]
print(valoresY)