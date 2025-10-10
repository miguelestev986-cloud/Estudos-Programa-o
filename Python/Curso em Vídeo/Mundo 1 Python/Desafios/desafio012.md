Faça um algoritmo que leia o preço de um produto e mostre seu novo preço, com 5% de desconto.

Minha resolução:

```python
p = float(input('Digite o preço do produto: R$'))  
d5 = p-(p*0.05)  
print(f'Com um desconto de 5%, o produto passará de R${p:.2f} para R${d5:.2f}')
```