Faça um programa que leia três números e mostre qual é o maior e qual é o menor.

Mi resolución:

```python
n1 = int(input('Ingresa un numero: '))  
n2 = int(input('Ingresa el segundo numero: '))  
n3 = int(input('Ingresa el tercer numero: '))  
if n1 > n2 and n1 > n3:  
    print(f'{n1} es el mayor número')  
else:  
    if n2 > n3:  
        print(f'{n2} es el mayor.')  
    else:  
        print(f'{n3} es el mayor.')
```