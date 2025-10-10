## Comandos com print()

O comando print() escreve oque está dentro dos parênteses no terminal; quando usamos as aspas dentro dos parênteses, significa que oque está dentro deles tem valor de String(é uma mensagem)
``
```python 
print('Olá, mundo!')
```
Neste exemplo, ele escreverá "Olá, mundo!" no terminal.

Não usamos as aspas quando realizamos cálculos com números. Se usarmos, invés de ser realizada a operação, ele juntará os números, por que eles agora seriam mensagens.

```python
print(7+5)
```
No terminal seria mostrado "11", pois 5 e 7 teriam valores numéricos.

```python
print('7+5')
```
No terminal seria mostrado "7+5"

```python
print('7'+'5')
```
No terminal seria mostrado "75", pois 5 e 7 seriam Strings; é como se estivéssemos juntando a + b

## Variáveis

Variáveis armazenam valores. É importante lembrar de não usar letras maiúsculas ou espaço  nas variáveis e que =, no Python, significa "recebe" e não "igual"

```python
nome = Miguel Estevão Vicente
#nome_completo recebe Miguel Estevão Vicente
idade = 13
#idade recebe 13
print(nome, idade)
```
No terminal teríamos "Miguel Estevão Vicente 13"

Para que recebamos informações enviadas pelo usuário, usamos input(), que significa "leia"

```python
nome = input('Qual seu nome?')
#nome recebe o resultado de input
idade = input('Qual sua idade?')
print(nome, idade)
```
No terminal teríamos o mesmo resultado que o anterior, mas com as respostas do usuário.

## Desafios da aula

[[desafio001]]
[[desafio002]]



