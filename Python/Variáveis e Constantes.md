# **Oque são

*Variáveis* armazenam valores que "nascem" com um valor mas que podem sofrer alterações durante a execução do programa. Como o Python define o tipo de uma variável automaticamente pelo valor que ela recebe, logo não podemos declarar uma variável que não receba nenhum valor. Para alterar o valor de uma variável, basta atribui-lá um novo valor.

```python 

nome = "Calabreso da Silva"
#nome recebe Calabreso da Silva
idade = 20
#idade recebe 20
print(nome, idade)
```
Na saída (Terminal): Calabreso da Silva 20

Podemos definir mais de uma variável em uma única linha:

```python

nome, idade = "Calabreso da Silva", 20
print(f"Nome = {nome} Idade = {idade})
```

A diferença de variável para  *constantes* é que uma constante permanece com o valor definido inicialmente até o fim do programa (ou seja, o valor é imutável). Um detalhe é que o Python não tem uma palavra reservada para informar ao interpretador que o valor é constantes, então por convenção as escrevemos em letras maiúsculas.

# **Boas Práticas

- Os nomes não devem ter espaços(substitua-os por urderline). Ex.: nome_da_variavel
- Escolha nomes sugestivos
- Escrevemos constantes em letras maiúsculas (para diferenciá-las de variáveis)