### Fontes
Bootcamp DIO [Suzano - Python Developer](https://www.dio.me/bootcamp/suzano-python-developer)
Curso em Vídeo Python - Mundo 2
# **O que são

São estruturas utilizadas para repetir um trecho de código diversas vezes. Isso pode acontecer por um número conhecido de repetições ou a partir de uma condição lógica.

# **for

O laço for em Python serve para percorrer elementos de uma sequência, como listas, strings ou valores gerados por range. Ele recebe cada item de um iterável (um objeto que pode retornar um iterador, permitindo o acesso sequencial a seus elementos um por vez) e executa o bloco de código uma vez para cada item.
Usamos o for quando queremos percorrer um iterável que ser uma sequência com tamanho conhecido ou não. Por exemplo:

```python
for letra in 'Python':
	print(letra, end = ' ')

>>>P y t h o n
```
O Python entende que a string é uma sequência e entrega uma letra por vez para a variável letra, seguindo a ordem do texto. O nome da variável não importa, pois ela apenas recebe o próximo valor fornecido pelo iterador interno.

# **for/else

O for/else funciona assim: o else é executado somente quando o laço for termina normalmente, sem interrupção. Se um break ocorre dentro do for, o bloco else não é executado.

```python
for letra in 'Python':
	print(letra, end = ' ')
else:
	print('Acabou!')
>>>P y t h o n Acabou!
```
O else do for é executado quando o laço chega ao fim natural dos itens disponíveis. O else não depende de condição nenhuma, ele depende da forma como o laço termina. Se um break ocorre dentro do for, o laço é interrompido artificialmente antes de percorrer todos os itens, e por isso o else não é executado.

# **while

O laço while é usado para repetir um bloco de código  várias vezes. Faz sentido usar while quando não sabemos o número exato de vezes que nosso bloco de código deve ser executado. Ex.:

```python
senha = '1234'
entrada = input('Qual a senha?')
while entrada != '1234':
	print('Senha incorreta! Tente novamente.')
	entrada = input('Qual a senha?')
```

# **while/else

Assim como for/else, podemos usar else para executar um bloco de código quando a condição do laço while não for atendida.

```python
senha = '1234'
entrada = input('Qual a senha?')
while entrada != '1234':
	print('Senha incorreta! Tente novamente.')
	entrada = input('Qual a senha?')
else:
	print('Senha correta!')
```

# **break

A instrução break encerra um laço de repetição. Ex.:

```python
num = 0
while num < 500:
    print(num)
    num += 1
    if num == 369:
        break
```
Ele vai de 0 até 368 e sai do loop quando chega em 369

# **continue

Tal qual break, temos o continue. Que inicia outra iteração, pulando o resto do código da iteração atual.

```python
num = 0
while num < 500:
    if num == 369:
        num += 1
        continue
    print(num)
    num += 1
```

# **range

A função range() é uma função padrão do Python que é usada para produzir uma sequência de números inteiros a partir de um início (inclusivo) para um fim (exclusivo).
Ela pode receber até três argumentos: start (opcional, por padrão ele começa em 0), stop (obrigatório) e step (opcional).

```python
print(list(range(2, 11, 3)))

>>>[2, 5, 8]
```
Começa em 2, pula de 3 em 3 e vai até 11 (mas não considera 11 porque ele é exclusivo)
Usamos list() porque range() não guarda os números, ele calcula sob demanda (é mais leve, mais rápido e usa menos memória).