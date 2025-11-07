Faça um algoritmo que leia o salário de um funcionário e mostre seu novo salário, com 15% de aumento.

Minha resolução:

```python
s = float(input('Qual o sálario do funcionário? R$'))  
a15 = s+(s*0.15)  
print(f'Com um aumento de 15%, o sálario passará de R${s:.2f} para R${a15:.2f}')
```