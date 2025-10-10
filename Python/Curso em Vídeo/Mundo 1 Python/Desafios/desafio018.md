Faça um programa que leia um ângulo qualquer e mostre na tela o valor do seno, cosseno e tangente desse ângulo.

Minha resolução:

```python
from math import sin, cos, tan, radians  
an = float(input('Digite el angulo que deseas: '))  
seno = sin(radians(an))  
cosseno = cos(radians(an))  
tangente = tan(radians(an))  
print(f'''El angulo de {an} tiene el seno de {seno:.3f}  
El cosseno de {cosseno:.3f}  
Y la tangente de {tangente:.3f}''')

```

Observação:
Copiei del vídeo de resolución, conteúdo matemático muy adelante de lo que sé.