### Fontes
Curso em Vídeo Python - Mundo 1

# **Por Que Usamos?

Os tipos servem para definir as características e comportamentos de um valor para o interpretador. Por exemplo, com um certo tipo podemos realizar operações matemáticas, outros não. '25' é diferente de 25.

# **Tipos de Dados

No Python, temos 4 tipos básicos de dados: int, float, bool, str

O tipo int indica valores inteiros (Ex.: 0, 1, -932884, 120...)
O tipo float indica valores reais (Ex.: 0, 1.4, -19283.2234...)
O tipo bool indica um valor lógico (True ou False)
O tipo str indica valor de caractere (Ex.: "Eu amo pudim!")

# **Conversão de tipos

1. int() converte oque está dentro dos parênteses como um número inteiro.

```python
n1 = int(input('Digite o primeiro número: '))
n2 = int(input('Digite o segundo número: '))
print(f'A soma entre {n1} e {n2} vale {n1+n2})
```
Se nós digitarmos 6 e 8, teríamos como resultado 14 (Sem int() teríamos como resultado 68)

2. float() converte oque está dentro dos parênteses como um número real (ou número de ponto flutuante).

```python
n1 = float(input('Digite o primeiro número: '))
n2 = float(input('Digite o segundo número: '))
print(f'A soma vale {n1+n2})
```
Se nós digitarmos 6 e 8, teríamos como resultado 14.0

3. bool() converte oque está dentro dos parênteses com um valor lógico(ou boleano). Ele nos retorna se o valor é True (verdadeiro) ou False (falso).

```python
n = bool(input('Digite um número: '))
print(n)
```
Se digitarmos qualquer coisa, no terminal será mostrado "True", pois a variável tem um valor guardado. Se não digitarmos, será mostrado False, pois a variável não tem nenhum valor.

4. str() converte oque está dentro dos parênteses com um valor de caractere. Detalhe que, sem outra formatação, o valor da variável já é uma string.

```python
algo = str(input('Digite algo: '))
print(algo)
```
Se digitarmos um número, ele terá valor de string.

# **Verificação do tipo de um dado

Podemos verificar o tipo primitivo de uma variável com type()

Podemos verificar os tipos de uma variável com o comando ".is" ; alguns ".is" são: 

1. variável.isnumeric() verifica se é possível converter o valor da variável em um valor numérico e nos retorna True ou False;
2. variável.isalpha() verifica se é o valor da variável é alfabético e nos retorna True ou False;
3. variável.isalnum() verifica se o valor da variável é alfanumérico e nos retorna True ou False;
4. Existem outros; eles estão no exercício 4.