### Fontes
Bootcamp DIO [Suzano - Python Developer](https://www.dio.me/bootcamp/suzano-python-developer)
Curso em Vídeo Python - Mundo 2
# **O que são

São estruturas utilizadas para repetir um trecho de código determinado número de vezes. Esse número pode ser conhecido previamente ou determinado através de uma expressão lógica.

# **for

Usamos o laço de repetição for quando sabemos o número exato de vezes que nosso bloco de código deve ser executado, ou quando queremos percorrer um objeto iterável (Em essência, um iterável é um objeto que pode retornar um iterador, permitindo o acesso sequencial a seus elementos um por vez).



# **for/else

Podemos adicionar um else para executar um bloco de código caso a condição de for retorne False

# **while

O laço while é usado para repetir um bloco de código  várias vezes. Faz sentido usar while quando não sabemos o número exato de vezes que nosso bloco de código deve ser executado. Ex.:

```python
senha = '1234'
entrada = input('Qual a senha?')
while entrada != '1234'
	print('Senha incorreta! Tente novamente.')
	entrada = input('Qual a senha?')
```

# **while/else

Assim como for/else, podemos usar for para executar um bloco de código quando a condição do laço while não for atendida.

```python
senha = '1234'
entrada = input('Qual a senha?')
while entrada != '1234'
	print('Senha incorreta! Tente novamente.')
	entrada = input('Qual a senha?')
else
	print('Senha correta!')
```

# **break

A instrução break encerra um laço de repetição. Ex.:

```python
num = int(input('Informe um número: '))
while num > 0
	print(num - 2)
	if num == 369
		break
```

# **continue

Tal qual break, temos o continue.

# **range

A função range() é uma função padrão do Python que é usada produzir uma sequência de números inteiros a partir de um início (inclusivo) para um fim (exclusivo). Se usarmos range(x, y) será produzido:

x, x+1, x+2..., y-1.

Ela recebe três argumentos: stop (obrigatório), start (opcional, por padrão ele começa em 0) e step (opcional).