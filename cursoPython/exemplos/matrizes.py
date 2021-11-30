matriz = [[1,2,3],[4,5,6],[7,8,9]]

print(matriz)

for i in range(0,3):
    print(matriz[i])

matriz[0][0] = 200
matriz[1][1] = 300
matriz[2][2] = 400

for i in range(0,3):
    print(matriz[i])