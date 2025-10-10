Escreva um programa que pergunte o salário de um funcionário e calcule o valor do seu aumento. Para salários superiores a R$1250,00, calcule um aumento de 10%. Para os inferiores ou iguais, o aumento é de 15%.

Mi resolución:

```python
s = float(input('Ingresa el valor del salario: R$'))  
if s > 1250:  
    print(f'El salario con aumento es de R${s+(s*0.10):.2f}')  
else:  
    print(f'El salario con aumento es de R${s+(s*0.15):.2f}')
```