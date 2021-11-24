
x = "((4+2*5)/2)**2"

resultado = eval(x)
print(resultado)

########################################################

x = 3
y = "((4+x*5)/2)**2"

resultado = eval(y)
print(resultado)

#########################################################

valorZ = 2
y = "((4+z*5)/2)**2"
y = y.replace("z", str(valorZ))

resultado = eval(y)
print(resultado)



