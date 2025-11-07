Faça um programa que leia algo pelo teclado e mostre na tela o seu tipo primitivo e todas as informações possíveis sobre ele.

Minha resolução:

```python
algo = input('Digite algo:')  
print('O tipo primitivo desse valor é ', type(algo))  
print(f'É um número?{algo.isnumeric()}')  
print(f'É alfabético?{algo.isalpha()}')  
print(f'É alfanumérico?{algo.isalnum()}')  
print(f'Está em maiúsculas?{algo.isupper}')  
print(f'Está em minúsculas?{algo.islower}')  
print(f'Só tem espaços?{algo.isspace()}')  
print(f'Está capitalizada?{algo.istitle()}')

```

Observações:
.isupper() verifica se a variável armazena um valor escrito em maiúsculas.
.islower() verifica se variável armazena um valor escrito em minúsculas.
.isspace() verifica se a variável armazena um valor de espaço(só espaços)
.istitle() verifica se a variável armazena um valor capitalizado(se é um título)