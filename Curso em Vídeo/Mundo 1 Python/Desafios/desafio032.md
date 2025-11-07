Faça um programa que leia um ano qualquer e mostre se ele é bissexto.


Mi resolución:

```python
ano = int(input('Ingresa un año: '))  
if ano % 4 == 0:  
    print(f'El año {ano} es bisiesto.')  
else:  
    if ano % 400 == 0:  
        print(f'El año {ano} es bisiesto.')  
    else:  
        print(f'El año {ano} no es bisiesto.')
```