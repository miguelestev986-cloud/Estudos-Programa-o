Faça um programa que leia um número de 0 a 9999 e mostre na tela cada um dos dígitos separados.

Resolución:

```python
num = int(input('digite um número: '))  
u = num % 10  
d = num // 10 % 10  
c = num // 100 % 10  
m = num // 1000 % 10  
print(f'''A unidade é {u}  
A dezena é {d}  
A centena é {u}  
O milhar é {m}''')
```

Observación:
No hice porque no había entendido.