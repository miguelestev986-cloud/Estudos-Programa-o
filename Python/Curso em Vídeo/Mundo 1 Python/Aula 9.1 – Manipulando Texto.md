## Fateamiento de Strings

Cuando usamos corchetes después de una variable que almacena un valor de texto, podemos coger un carácter.

```python
frase = 'Curso em Vídeo Python'
print(frase[1])
```
El carácter 1 de la frase es "u", porque el primer es el carácter 0.

Podemos también usar [ x : y ] para coger una cadena de caracteres.
```python
frase = 'Curso em Vídeo Python'
print(frase[0:5])
```
En la terminal, tendríamos "Curso", sin espacio porque : no coge el último carácter. También podríamos omitir el cero, y el programa cogería desde el inicio hasta el carácter que fue elegido. Del mismo modo, podríamos omitir el final, y cogería desde el carácter elegido hasta el fin.
```python
frase = 'Curso em Vídeo Python'
print(frase[:5])
```

Podemos usar [ x : y : z ] para coger una cadena de caracteres saltando de z en z posiciones.
```python
frase = 'Curso em Vídeo Python'
print(frase[0:5:2])
```
Tendríamos "Cro". En este ejemplo, podríamos omitir el final, y cogería desde el carácter elegido hasta el fin saltando de 2 en 2 posiciones.

## Análisis de Strings

Algunas funciones que podemos utilizar para analizar strings son:

1. "len(variable)" verifica cuántos caracteres tiene la string;
2. "variable.count('x')" verifica cuántas veces el carácter 'x' aparece en la string;
- Podemos utilizar el fraccionamiento para verificar cuántas veces el carácter "x" aparecedentro de una cadena de caracteres (variable.count("x",0,14))
1. "variable.find('x')" verifica en qué carácter se inicia "x";
- Si no hay "x" en la variable, el programa nos devuelve -1
1. " 'x' in variable" verifica si "x" existe en la variable y nos devuelve True o False;
## Transformación de Strings

Algunas funciones que podemos utilizar para transformar strings son:

1. variable.replace('x', 'y') reemplaza "x" por "y" en la string;
2. variable.upper() transforma todas las letras de la string en letras mayúsculas;
3. variable.lower() transforma todas las letras de la String en letras minúsculas;
4. variable.capitalize() pone todas las letras de la string en minúsculas y la primera la transforma en mayúscula;
5. variable.title() identifica las palabras de la string y pone la primera letra de cada una en mayúscula.
6. variable.strip() retira todos los espacios innecesarios del inicio y del fin de la string;
- De modo similar, .rstrip() retira todos los espacios innecesarios del final (derecha) de la string y .lstrip() retira todos los espacios innecesarios del inicio (izquierda) de la string.

## División y unión de Strings

variable.split() separa las palabras (por medio de los espacios) y crea una lista de strings con ellas. Por ejemplo:

```python
frase = 'Curso em Vídeo'
frases = frase.split()
print(frases[0])
```
Tendríamos en el terminal "Curso"

'x'.join(variable) junta las palabras con el carácter "x".

## Desafios

[[desafio022]]
[[desafio023]]
[[desafio024]]
[[desafio025]]
[[desafio026]]
[[desafio027]]
