Faça um programa que leia uma frase pelo teclado e mostre quantas vezes aparece a letra “A”, em que posição ela aparece a primeira vez e em que posição ela aparece a última vez.

Mi resolucción:

```python
frase = input('Ingresa una frase: ').upper()  
print(f'''La letra "A" aparece {frase.count('A')} veces.La letra "A" aparece la primera vez en el caracter {frase.find("A")}  
La letra "A" aparece la ultima vez en el caracter {frase.rfind("A")}''')
```

Observación:
Em Python, o método .rfind() é usado para encontrar a última ocorrência de uma substring dentro de uma string, retornando o índice da sua posição. Caso a substring não seja encontrada, o método retorna -1.