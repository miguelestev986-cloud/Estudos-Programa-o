### Fontes
Curso em Vídeo Python - Mundo 1
Bootcamp DIO [Suzano - Python Developer](https://www.dio.me/bootcamp/suzano-python-developer)
# **Fatiamento de Strings

Quando usamos colchetes depois de uma variável que armazena um valor de texto, podemos pegar apenas um caractere.

```python
frase = 'Curso em Vídeo Python'
print(frase[1])
```
O caractere 1 da frase é "u", porque o índice se inicia em 0.

Podemos também usar [ x : y ] para pegar uma cadeia de caracteres.
```python
frase = 'Curso em Vídeo Python'
print(frase[0:5])
```
Na saída, teríamos "Curso", sem espaço porque : não pega o último caractere. Também poderíamos omitir o zero, e o programa pegaria desde o início até o caractere que foi escolhido. Do mesmo modo, poderíamos omitir o final, e pegaria desde o caractere escolhido até o fim.
```python
frase = 'Curso em Vídeo Python'
print(frase[:5])
```

Podemos usar [ x : y : z ] para pegar uma cadeia de caracteres saltando de z em z posições.
```python
frase = 'Curso em Vídeo Python'
print(frase[0:5:2])
```
Teríamos "Cro". Nesse exemplo, poderíamos omitir o final, e o programa pegaria desde o caractere escolhido até o fim saltando de 2 em 2 posições.

# **Análise de Strings

Algumas funções que podemos utilizar para analisar strings são:

1. len() verifica quantos caracteres a string tem;
2. .count('x') verifica quantas vezes o caractere 'x' aparece na string;
3. Com .count("x", 0, 14) podemos utilizar o fracionamento para verificar quantas vezes o caractere "x" aparece dentro de uma cadeia de caracteres.
4. .find('x') verifica em que caractere se inicia "x".  Se não há  "x" na string pertencente à variável, o programa nos devolve -1 (erro)
5.  'x' in nome_variável verifica se "x" existe na variável e nos devolve True o False;
# **Transformação de Strings

Algumas funções que podemos utilizar para transformar strings são:

1. .replace('x', 'y') substitui "x" por "y" na string;
2. .upper() deixa todas as letras da string em letras maiúsculas;
3. .lower() transforma todas as letras da String em letras minúsculas;
4. .capitalize() põe o primeiro caractere da string em maiúsculo e deixa as outras em minúsculo;
5. .title() põe a primeira letra de cada palavra em maiúscula.
6. .strip() retira todos os espaços desnecessários da string;
7. De modo similar a .strip(), .rstrip() retira todos os espaços desnecessários do final (direita) da string e .lstrip() retira todos os espaços desnecessários do início (esquerda) da string.

# **Divisão e união de Strings

1. .split() separa as palavras (por meio dos espaços) e cria uma lista de strings com elas. Por exemplo:

```python
frase = 'Curso em Vídeo'
frases = frase.split()
print(frases[0])
```
Teríamos na saída: "Curso"

2. 'x'.join(nome_variável) junta os caracteres da string com o caractere "x".
3. .center(x, 'y') centraliza a string. Esse método possui dois argumentos: o primeiro define o número de caracteres da nova string e o segundo (que é opcional) define qual caractere vai ser usado na centralização. Ex.:

```python
curso = 'Python'
print(curso.center(10, '$'))
>>>$$Python$$
```

Caso você não informe o segundo argumento, ele centralizará com espaços em branco.