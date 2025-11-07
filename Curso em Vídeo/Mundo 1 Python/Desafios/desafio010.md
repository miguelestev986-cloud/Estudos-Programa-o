Crie um programa que leia quanto dinheiro uma pessoa tem na carteira e mostre quantos dólares ela pode comprar.

Minha resolução:

```python
r = float(input('Quantos dinheiro você tem na carteira? R$'))  
print(f'Com R${r:.2f} você pode comprar US${r/5.50:.2f} ')
```