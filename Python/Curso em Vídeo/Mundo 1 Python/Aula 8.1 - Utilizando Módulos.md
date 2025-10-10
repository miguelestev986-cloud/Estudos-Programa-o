## Oque são módulos?

Módulos são bibliotecas(meio que extensões) que você pode importar pro seu código para que ele tenha algo além do que a linguagem oferece. 

## Como usá-los?

Por exemplo, podemos ter a biblioteca "doces". Primeiro, precisamos baixar essa biblioteca, e depois, importá-la para o nosso código.

Para baixarmos, no terminal escrevemos:

```python
pip install doces
```
``

Para encontrar bibliotecas e estudar as funções que elas possuem, procuramos no site [python.org](python.org) na aba PyPI.

Para importá-las, escrevemos dentro do código:

```python
import doces
```
Neste exemplo, importamos toda a biblioteca "doces". Mas e se quisermos apenas uma funcionalidade da biblioteca "doces"?

Usamos esse código:

```python
from doces import paçoca
```
Neste exemplo, da biblioteca "doces", importaremos apenas a função "paçoca". Importante lembrar que podemos importar mais de uma função sem importar todas.

```python
from doces import paçoca, pudim, geleia
```

Exemplo de uso de bibliotecas:

```python
import math  
num = float(input('Digite um número:'))  
print(f'O número {num} tem como parte inteira {math.trunc(num)}.')

```
Se digitarmos "1.369", teremos como resposta "O número 0.369 tem como parte inteira 1." 

Podemos também importas apenas a função trunc:

```python
from math import trunc 
num = float(input('Digite um número:'))  
print(f'O número {num} tem como parte inteira {trunc(num)}.')

```
Observemos que não importando a biblioteca completa, retira-se a necessidade de usar "math."

## Biblioteca math


É uma biblioteca que já vem por padrão instalada no Python, que realiza operações matemáticas.
Algumas funcionalidades são:

1. Para arredondarmos um número para cima, usamos ceil();
2. Para arredondarmos um número para baixo, usamos floor();
3. Para eliminarmos as casas decimais de um número, usamos trunc();
4. Para calcularmos potência, usamos pow(base, expoente);
5. Para calcularmos raiz quadrada, usamos sqrt();
6. Para calculamos fatorial, usamos factorial();
7. E outras(math.).

## Biblioteca random


É uma biblioteca que podemos baixar pelo python.org que gera números aleatórios e outras funções.

1. Para gerarmos um número aleatório entre 0 e 1, usamos random();
2. Para encolhermos um número inteiro aleatório dentro de um conjunto de números, usamos randint()
 
## Desafios

[[desafio016]]
[[desafio017]]
[[desafio018]]
[[desafio019]]
[[desafio020]]
[[desafio021]]







