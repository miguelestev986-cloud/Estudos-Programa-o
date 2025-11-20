##### Fontes
Bootcamp DIO [Suzano - Python Developer](https://www.dio.me/bootcamp/suzano-python-developer)
Curso em Vídeo Python - Mundo 1

# **Operadores Aritméticos

Os operadores aritméticos executam *operações matemáticas*, como adição, subtração, divisão... Em Python, nós temos:

- + (Adição)
- - (Subtração)
- * (Multiplicação)
- / (Divisão)
- // (Divisão Inteira)
Ex.:
```python
print(5//2)
>>> 2
```
- % (Resto da Divisão)
- ** (Exponenciação)
- ** (1/2) (Raiz quadrada)
- ** (1/3) (Raiz cúbica)

Eles têm uma ordem de precedência (Quais operações devem ser executadas primeiro), que é:

1. Parênteses
2. Exponenciação
3. Multiplicação, divisão, divisão inteira e resto da divisão
4. Mais e menos

Assim como na matemática, se os operados têm a mesma precedência, será executado o que vier primeiro da esquerda para a direita.

# **Operadores de comparação

Como o nome expõe, são operadores utilizados para *comparar dois valores*. Eles retornam valores booleanos (True ou False). No Python, temos:

- == (É igual a)
- != (Diferente de)
- > (Maior que)
- >= (Maior que ou igual a)
- < (Menor que)
- <= (Menor que ou igual a)

# **Operadores de Atribuição

São operadores utilizados para definir o valor inicial ou sobrescrever o valor de uma variável.

- = (Atribuição simples)
- += (Atribuição com adição)
```python
saldo = 1500
saldo += 200
#é como se estivéssemos dizendo 'saldo recebe saldo + 200' ou saldo = saldo + 200
print(saldo)
>>> 1700
```
De mesmo modo da atribuição com adição temos:
- -= (Atribuição com subtração)
- /= (Atribuição com divisão)
- //= (Atribuição com divisão inteira)
- ** = (Atribuição com exponenciação)

# **Operadores Lógicos

São operadores utilizados em conjunto com os operadores de comparação, para montar uma expressão lógica que retorna uma valor booleano.

- and (E)
- or (Ou)
- not (Negação)
- () (Delimita a precedência da expressão)

Ex.:
```python
print((100 * 4)/2 == 200 and 100 * 2 == 400)
>>> False

print((100 * 4)/2 == 200 or 100 * 2 == 400)
>>> True
#Apenas uma das expressões precisa ser verdadeira

print( not 100 * 2 == 400)
>>> True
```

# **Operadores de Identidade

São operadores utilizados para comparar se dois objetos testados ocupam a mesma posição na memória.

- is (É)
- is not (Não é)

Ex.:
```python
curso = 'Python'
nome_curso = 'Python'
print(nome_curso is curso)
>>> True
```
# **Operadores de Associação

São operadores utilizados para verificar se um objeto está presente em uma sequência.

- in (Está dentro de)
- not in (Não está dentro de)

Ex.:
```python
frutas = ['laranja', 'uva', 'limão']
print('laranja' in frutas)
>>> True

print('laranja' not in frutas)
>>> False
```