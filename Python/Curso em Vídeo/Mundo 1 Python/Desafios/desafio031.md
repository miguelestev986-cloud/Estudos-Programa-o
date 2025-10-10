Desenvolva um programa que pergunte a distância de uma viagem em Km. Calcule o preço da passagem, cobrando R$0,50 por Km para viagens de até 200Km e R$0,45 parta viagens mais longas.

Mi resolución:

```python
km = float(input('Ingresa la distancia de la viagem: '))  
if km <= 200:  
    print(f'El valor de la viagem es de R${km*0.50:.2f}')  
else:  
    print(f'El valor de la viagem es de R${km*0.45:.2f}')
```