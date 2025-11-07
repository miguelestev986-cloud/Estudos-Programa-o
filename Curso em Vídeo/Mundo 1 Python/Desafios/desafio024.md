Crie um programa que leia o nome de uma cidade diga se ela começa ou não com o nome “SANTO”.

Mi resolucción:

```python
cidade = input('Digite el nombre de alguna ciudad:')  
print(f'La ciudad tiene "Santo" en su nombre?{'Santo' in cidade.title()}')  
print(f'Y "São"?{'São' in cidade.title()}')

```