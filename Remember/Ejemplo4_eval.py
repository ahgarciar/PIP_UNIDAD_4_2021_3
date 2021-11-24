
valoresX = [-3, -2, -1, 0, 1, 2, 3]

expr = "2x**2+4x+3"
exprConReplace = expr.replace("x",str(valoresX[1]))
print(exprConReplace)
result = eval(exprConReplace)

print(result)

#######################################################################

valoresY = [eval(expr.replace("x","*("+str(i)+")")) for i in valoresX]

print(valoresY)

