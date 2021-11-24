
x = 2
expr = "2x**2+4x+3"
expr = expr.replace("x",str(x))

result = eval(expr)

print(result)
