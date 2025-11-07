Escreva um programa que faça o computador “pensar” em um número inteiro entre 0 e 5 e peça para o usuário tentar descobrir qual foi o número escolhido pelo computador. O programa deverá escrever na tela se o usuário venceu ou perdeu.

Mi resolución:

```python
from random import randint  
num = int(randint(0,5))  
respuesta = int(input('Adivina un número inteiro del 0 al 5: '))  
if respuesta == num:  
    print('Felicidades, ganaste')  
else:  
    print(f'Perdiste, el número era {num}')

```

Observación:
Para hacer una pausa en el programa, podemos utilizar de la biblioteca time, la función sleep(). Dentro de los parenteses ingresamos los segundos que deberá esperar.