Faça um programa que leia o nome completo de uma pessoa, mostrando em seguida o primeiro e o último nome separadamente.

Mi resolución:

```python
nome = input('Ingresa tu nombre:')  
nomes = nome.split()  
print(f'Su primer nombre es: {nomes[1]} \nSu útimo nombre es {nomes[-1]} ')
```

Observación:
-1 coge el último item de una lista.