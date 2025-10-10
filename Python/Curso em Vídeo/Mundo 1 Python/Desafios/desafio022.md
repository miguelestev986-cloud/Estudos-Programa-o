Crie um programa que leia o nome completo de uma pessoa e mostre: Seu nome em maiúsculas,minúsculas, quantos caracteres tem o nome e quantos caracteres tem o primeiro nome.

Mi resolucción:

```python
nome = input('Seu nome completo: ')  
print(nome.upper())  
print(nome.lower())  
print(f'O seu nome tem {len(nome) - nome.count(' ')} caracteres.')  
sobrenome = nome.split()  
print(f'O seu primeiro nome tem {len(sobrenome[0])} caracteres.')
```

Observações:
.plit() crea una lista de strings con la string original.