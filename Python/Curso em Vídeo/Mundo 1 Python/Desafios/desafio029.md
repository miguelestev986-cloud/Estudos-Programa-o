Escreva um programa que leia a velocidade de um carro. Se ele ultrapassar 80Km/h, mostre uma mensagem dizendo que ele foi multado. A multa vai custar R$7,00 por cada Km acima do limite.

Mi resolución:

```python
v = float(input('Ingresa la velocidad del coche: '))  
if v > 80:  
    print(f'Fuiste multado en R${(v-80)*7}')  
print('Tenga un buen día y conduzca con seguridad!')
```