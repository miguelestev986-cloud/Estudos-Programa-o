Crie um algoritmo que leia um número e mostre o seu dobro, triplo e raiz quadrada.

Minha resolução:

```python
n=float(input('Digite um número:'))  
d = n * 2  
t = n * 3  
rq = n** (1/2)  
print('O dobro de {n:.0f} é {d}.\nO triplo é {t}\nE a raíz quadrada é {rq:.3f}')

```

Observações:

{variável : x} faz com que tenha x número de caracteres;
```python
nome = input('Qual seu nome?')
print(f'Prazer em te conhecer {nome:20}!'

```
Se respondermos Miguel, no terminal teríamos "Prazer em te conhecer Miguel             !"

{variável : > 20} Alinha a variável à direita em 20 caracteres.

{variável : ^ 20} Centraliza a variável em 20 caracteres.

\n Quebra a linha
```python
n1 = float(input('Digite um valor:'))  
n2 = float(input('Digite outro valor:'))  
s = n1+n2  
m = n1*n2  
d = n1/n2  
print(f'A soma é {s}\nO produto é {m}\nE a divisão é {d:.3}')
```

{variável : . x f} Formata a variável ( int() ou float() ) com x número de casas decimais (No caso acima, com 3 casas decimais).
