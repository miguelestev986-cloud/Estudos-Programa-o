Crie um programa que leia um número real qualquer pelo teclado e mostre na tela a sua porção inteira.

Minha resolução:

```python
from math import trunc
num = float(input('Digite um número:'))  
print(f'O número {num} tem como parte inteira {trunc(num)}')

```

Observação:
Podemos formatar num como um número inteiro (int()), logo não seria necessário importar trunc().

```python
num = float(input('Digite um número:'))  
print(f'O número {num} tem como parte inteira {int(num)}')

```