
## Oque é ANSI

 As sequências de escape ANSI, que são códigos de texto usados para controlar a formatação (cores, estilos de texto) em terminais. Usamos, dentro das aspas do print(''), o código:
 
```
 \033[estilo; texto; fundom
```
O "m" sempre fica no final. O padrão do terminal é um texto sem formatação, cinza e com fundo preto, então o código seria apenas \033[m

## Estilo (style)

1. 0 = nada;
2. 1 = negrito;
3. 4 = sublinhado;
4. 7 = inverte as cores do texto com a fundo.

## Texto (text)

1. 30 = branco;
2. 31 = vermelho;
3. 32 = verde;
4. 33 = amarelo;
5. 34 = azul;
6. 35 = lilás;
7. 36 = ciano;
8. 37 = cinza.

## Fundo (back)


1. 40 = branco;
2. 41 = vermelho;
3. 42 = verde;
4. 43 = amarelo;
5. 44 = azul;
6. 45 = lilás;
7. 46 = ciano;
8. 47 = cinza.

##  Exemplo

Um texto em vermelho, sublinhado e com fundo azul:

```python
print('\033[4;31;44mOlá mundo!')
```
No terminal, a formatação do fundo seguiria mesmo após o fim da string até o final da linha. Para termos a formatação apenas até o fim da string, usamos \033[m no final da string.

```python
print('\033[4;31;44mOlá mundo!\033[m')
```