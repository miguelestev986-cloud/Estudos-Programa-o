Escreva um programa que leia um valor em metros e o exiba convertido em centímetros e milímetros.

Minha resolução:

```python
m = int(input('Metros:'))  
cm = m*100  
mm = m*1000  
print(f'{m} metros convertido para centímetros é {cm}\n{m} metros convertido para milimetros é {mm}')

```