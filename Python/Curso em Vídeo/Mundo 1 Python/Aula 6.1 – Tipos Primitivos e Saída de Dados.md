## Tipos de dados básicos

No Python, temos 4 tipos básicos de dados: 

1. int() formata oque está dentro dos parênteses como um número inteiro.

```python
n1 = int(input('Digite o primeiro número: '))
n2 = int(input('Digite o segundo número: '))
print(f'A soma entre {n1} e {n2} vale {n1+n2})
```
Se nós digitarmos 6 e 8, teríamos como resultado 14 (Sem int() teríamos como resultado 68)

2. float() formata oque está dentro dos parênteses como um número real (ou número de ponto flutuante).

```python
n1 = float(input('Digite o primeiro número: '))
n2 = float(input('Digite o segundo número: '))
print(f'A soma vale {n1+n2})
```
Se nós digitarmos 6 e 8, teríamos como resultado 14.0

3. bool() formata oque está dentro dos parênteses com um valor lógico(ou boleano). Ele nos retorna se o valor é True (verdadeiro) ou False (falso).

```python
n = bool(input('Digite um número: '))
print(n)
```
Se digitarmos qualquer coisa, no terminal será mostrado "True", pois a variável tem um valor guardado. Se não digitarmos, será mostrado False, pois a variável não tem nenhum valor.

4. str() formata oque está dentro dos parênteses com um valor de caractere (ou string). Detalhe que, sem outra formatação, o valor da variável já é uma string.

```python
algo = str(input('Digite algo: '))
print(algo)
```
Se digitarmos um número, ele terá valor de string.

## Verificação do tipo de um dado

Podemos verificar o tipo primitivo de uma variável com type()

Podemos verificar os tipos de uma variável com o comando ".is" ; alguns ".is" são: 

1. variável.isnumeric() verifica se é possível converter o valor da variável em um valor numérico e nos retorna True ou False;
2. variável.isalpha() verifica se é o valor da variável é alfabético e nos retorna True ou False;
3. variável.isalnum() verifica se o valor da variável é alfanumérico e nos retorna True ou False;
4. Existem outros; eles estão no exercício 4.

## Desafios

[[desafio003]]
[[desafio004]]