Faça um programa que leia o comprimento do cateto oposto e do cateto adjacente de um triângulo retângulo, calcule e mostre o comprimento da hipotenusa.

Minha resolução:

```python
import math  
co = float(input('Digite o comprimento do cateto oposto: '))  
ca = float(input('Digite o comprimento do cateto adjacente: '))  
h = math.hypot(co, ca)  
print(f'A hipotenusa vale {h}.')
```

Observações:
A função hypot (x, y) retorna √(x² + y²), sendo útil para calcular o módulo de um vetor ou a distância entre dois pontos.