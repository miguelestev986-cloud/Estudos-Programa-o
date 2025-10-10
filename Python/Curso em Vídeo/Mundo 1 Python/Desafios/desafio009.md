Faça um programa que leia um número Inteiro qualquer e mostre na tela a sua tabuada.

Minha resolução:

```python
n = int(input('Digite um número para descubrir sua tabuada:'))  
print('-'*12)  
print(f'''  
{n} . {1:2} = {n:2}  
{n} . {2:2} = {n*2:2}  
{n} . {3:2} = {n*3:2}  
{n} . {4:2} = {n*4:2}  
{n} . {5:2} = {n*5:2}  
{n} . {6:2} = {n*6:2}  
{n} . {7:2} = {n*7:2}  
{n} . {8:2} = {n*8:2}  
{n} . {8:2} = {n*9:2}  
{n} . 10 = {n*10}''')  
print('-'*12)
```

Observações:
  
''' ''' Dispensa o uso de \n ou criação de vários print();
f'' é a mesma coisa que ''.format(), mas de uma versão mais atual do Python.