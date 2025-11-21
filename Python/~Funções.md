### Fontes
Bootcamp DIO [Suzano - Python Developer](https://www.dio.me/bootcamp/suzano-python-developer)

# **O Que São

Uma função é um bloco de código identificado por um nome e pode receber uma lista de parâmetros, esses parâmetros podem ou não ter valores padrões. Usar funções torna o código mais legível e possibilita reaproveitamento de código.

# **Definição

Podemos definir variáveis com *def*, dá-las um nome com significado claro, atribuir-las parâmetro e logo o bloco de código que elas executam. Ex.:

```python
def boas_vindas(nome, língua)
	if língua == 'Português':
		print(f'Olá {nome}!')
	elif língua == 'Inglês':
		print(f'Hello {nome}')
	else:
		print('Perdão, só temos tradução para Português e Inglês')

boas_vindas('Miguel', 'Inglês')
```

# **Retorno

Para retornar um valor, utilizamos *return*. Toda função Python retorna *None* por padrão. Diferente de outras linguagens, Python permite que a função retorne mais de um valor.

```python
def dobro(número)
	dobro = número * 2
	return dobro

num = int(input('Digite um número: '))
print(f'O dobro de {num} é {dobro(num)}')
```

No caso da função retornar mais de um valor, ela retorna um *tupla* com os valores. Uma tupla em Python é uma sequência imutável de valores de qualquer tipo, o que significa que, uma vez criada, seus elementos não podem ser alterados, adicionados ou removidos. Ex.:

```python
def antec_suces(número)
	antecessor = número - 1
	sucessor = número + 1
	return antecessor, sucessor
```

# **Argumentos Nomeados
# **Args e kwargs

Podemos combinar parâmetros obrigatórios com args e kwargs. Quando esses são definidos (* args e ** kwargs), o método recebe os valores como tupla e dicionário respectivamente.
