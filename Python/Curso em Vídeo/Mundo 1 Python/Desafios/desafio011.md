Faça um programa que leia a largura e a altura de uma parede em metros, calcule a sua área e a quantidade de tinta necessária para pintá-la, sabendo que cada litro de tinta pinta uma área de 2 metros quadrados.

Minha resolução:

```python
l = float(input('Largura da parede:'))  
a = float(input('Altura da parede:'))  
area = l*a  
print(f'A área da parede {l}m por {a}m é {area:.2f}m')  
print(f'A quantidade de tinta necessária será de {area/2}l')
```