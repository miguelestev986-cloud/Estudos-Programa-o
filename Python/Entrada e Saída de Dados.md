### Fontes
Bootcamp DIO [Suzano - Python Developer](https://www.dio.me/bootcamp/suzano-python-developer)
Curso em Vídeo Python - Mundo 1

A função *input* é utilizada quando queremos ler dados da entrada padrão (teclado). Ela recebe um argumento do tipo string, que é exibido para o usuário na saída padrão (tela). A função lê a entrada (ela abre permite que o usuário escreva), a converte para string e retorna o valor ao chamador. Exemplos:

```python
idade = int(input('Qual sua idade?'))
print(f'Sua idade é {idade}')
```
Será exibido na saída: Qual sua idade? e o usuário poderá digitar. A entrada do usuário será convertida para de tipo inteiro e logo atribuído à idade.

obs: O argumento de print() é uma f-string (uma string formatada). Elas são usadas quando queremos substituir valores dentro de uma string.
Como no exemplo, {idade} será substituída pelo valor que for atribuído à variável idade. É uma alternativa moderna para .format().

```python
nome = input()
print(f'Seu nome é {nome}')
```
Não será exibido nada na saída, mas o usuário poderá digitar algo e esse valor será atribuído à nome.

# **Exibindo Valores

A função *print* é utilizada quando queremos mostrar dados na saída padrão (Tela). Ela recebe um argumento obrigatório do tipo varargs de objetos e 4 opcionais (sep, end, file e flush).Todos os objetos são convertidos para string, separados por sep e terminados por end. A string final é exibida ao usuário.
Quando usamos as aspas dentro dos parênteses, significa que oque está dentro deles tem valor de String (é uma mensagem). Não usamos as aspas quando realizamos cálculos com números. Se usarmos, invés de ser realizada a operação, ele juntará os números, por que eles agora seriam mensagens.

```python
print('Olá, mundo!')
```
Na saída: Olá, mundo!

```python
print(7+5)
```
Na saída: 12

```python
print('7+5')
```
No saída: 7+5

```python
print('7'+'5')
```
Na saída: 75


