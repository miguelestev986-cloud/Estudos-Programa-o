Um professor quer sortear um dos seus quatro alunos para apagar o quadro. Faça um programa que ajude ele, lendo o nome deles e escrevendo o nome escolhido.

Minha resolução:

```python
from random import choice 
print('Desafio 19')  
aluno1= input('Digite o nome do primeiro aluno: ')  
aluno2= input('Digite o nome do segundo aluno: ')  
aluno3= input('Digite o nome do terceiro aluno: ')  
aluno4= input('Digite o nome do quarto aluno: ')  
lista = [aluno1, aluno2, aluno3, aluno4]  
print(f'O estudante sorteado é {choice(lista)}')
```

Observações:
Uma lista armazena um conjunto de valores e usamod colchetes invés de parênteses;
choice() está escolhendo uma das variáveis da lista lista_alunos.
