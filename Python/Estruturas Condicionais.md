### Fontes
Bootcamp DIO [Suzano - Python Developer](https://www.dio.me/bootcamp/suzano-python-developer)
# **O que são

A estrutura condicional permite o desvio de fluxo de controle, quando determinadas expressões lógicas atendidas. Em python temos alguns que estão sendo explicados abaixo.

# **if

Para criar um estrutura condicional composta por um único desvio, podemos usar if. O comando testará uma expressão lógica e caso essa seja verdadeira, executará o bloco de código.

```python
idade = int(input('Qual sua idade'))
if idade >= 18:
	print('Você é maior de idade.')
if idade < 18:
	print('Você é menor de idade.')
```

# **if else

Para criar uma estrutura condicional com dois desvios, podemos usar if e else. Se a condição testada por if for verdadeira, o bloco de código dentro de if será executado, caso contrário, o bloco de código dentro de else será.

```python
idade = int(input('Qual sua idade'))
if idade >= 18:
	print('Você é maior de idade.')
else:
	print('Você é menor de idade.')
```

# **if elif else

Em alguns cenários, queremos testar mais de uma condição e ter mais de dois desvios, então usamos elif. A condição de if é testada, se verdadeira o bloco é executado. Caso seja falsa, a condição de elif é testada, e também, se verdadeira, o bloco é executado. Se elif retornar que a condição é falsa, o bloco de código dentro de else é executado. Não há um número limite de elif's que podem ser usados, mas não é recomendado que haja muitos, porque isso aumenta a complexidade de entendimento do código.

```python
idade = int(input('Qual sua idade'))
if idade >= 18:
	print('Você é maior de idade.')
elif idade <= 5:
	print('Você já sabe ler?!')
else:
	print('Você ainda é menor de idade.')
```

# **if Aninhado

Podemos criar estruturas condicionais aninhadas, para isso basta adiciona estruturas condicionais dentro do bloco de código de uma estrutura condicional. Ex.:

```python
idade = int(input('Qual sua idade'))
if idade >= 18:
	print('Você é maior de idade.')
else:
	if idade >= 16:
		emancipado = input('Você é emancipado? (s/n)')
		if emancipado == 's':
			print('Você tem os direitos e deveres de um maior de idade.)
		else:
			print('Você é menor de idade.)
	else:
		print('Você é menor de idade.')
```

# **if Ternário

O if ternário permite escrever uma condição em uma única linha. Ele é composto por três partes, a primeira é o retorno caso a expressão retorne verdadeiro, a segunda é a expressão lógica e a terceira o retorno caso a condição seja falsa (É como o laço de repetição for). Ex.:

```python
saldo = 1000
saque = int(input('Quanto você deseja sacar? R$))
status = 'Sucesso' if saque >= saldo else 'Falha'
print(f'{status} ao realizar o saque.)

```