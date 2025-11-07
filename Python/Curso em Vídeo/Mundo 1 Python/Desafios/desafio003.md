Crie um programa que leia dois números e mostre a soma entre eles.

Minha resolução:

```python
n1 = input('Digite o primeiro número:')
n2 = input('Digite o segundo número:')
print(f'A soma vale {n1 + n2})

```

Observação:
O código não nos dá o resultando esperado, oque será explicado na [[6.1 – Tipos Primitivos e Saída de Dados]].
Que terá como resolução:

```python
n1 = int(input('Digite o primeiro número:'))
n2 = int(input('Digite o segundo número:'))
print(f'A soma vale {n1 + n2})

```
Por que agora o valor digitado tem valor de número inteiro(int()) e não de string(str()).
