O mesmo professor do desafio anterior quer sortear a ordem de apresentação de trabalhos dos alunos. Faça um programa que leia o nome dos quatro alunos e mostre a ordem sorteada.

Minha resolução:

```python
from random import shuffle
aluno1 = input('Digite o nome do primeiro aluno: ')  
aluno2 = input('Digite o nome do segundo aluno: ')  
aluno3 = input('Digite o nome do terceiro aluno: ')  
aluno4 = input('Digite o nome do quarto aluno: ')  
lista_alunos = [aluno1, aluno2, aluno3, aluno4]
shuffle(lista_alunos)  
print(f'''  
O primeiro a apresentar é {lista_alunos[0]}  
O segundo a apresentar é {lista_alunos[1]}  
O terceiro a apresentar é {lista_alunos[2]}  
O quarto a apresentar é {lista_alunos[3]}''')
```

Observações:
A função "shuffle()" da biblioteca random embaralha a lista que estiver dentro dos parênteses;
Os códigos lista_alunos[número] representam o item que está naquela posição da lista embaralhada. 