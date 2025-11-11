### Fontes
[Site Oficial do Git](https://git-scm.com/book/pt-br/v2/Come%C3%A7ando-Uma-Breve-Hist%C3%B3ria-do-Git)
Bootcamp DIO [Suzano - Python Developer](https://www.dio.me/bootcamp/suzano-python-developer)

# **O que é Git?

É um sistema de controle de versão distribuído e é um dos mais utilizados atualmente, em especial por: é gratuito, código aberto, possui ramificações e fusões eficientes, é leve e rápido.

# **História

O núcleo (kernel) do Linux é um projeto de código aberto com um escopo bastante grande. A maior parte da vida da manutenção do núcleo o Linux (1991-2002), as mudanças no código eram compartilhadas como correções e arquivos. Em 2002, o projeto do núcleo do Linux começou usar uma DVCS proprietária chamada BitKeeper.

Em 2005, a relação entre a comunidade que desenvolveu o núcleo do Linux e a empresa que desenvolveu BitKeeper quebrou em pedaços, e a ferramenta passou a ser paga. Isto alertou a comunidade que desenvolvia o Linux (e especialmente Linus Torvalds, o criador do Linux) a desenvolver a sua própria ferramenta baseada em lições aprendidas ao usar o BitKeeper. Algumas metas do novo sistema era os seguintes:

- Velocidade
- Projeto simples    
- Forte suporte para desenvolvimento não-linear (milhares de ramos paralelos)
- Completamente distribuído
- Capaz de lidar com projetos grandes como o núcleo o Linux com eficiência (velocidade e tamanho dos dados)

Desde seu nascimento em 2005, Git evoluiu e amadureceu para ser fácil de usar e ainda reter essas qualidades iniciais. Ele é incrivelmente rápido, é muito eficiente com projetos grandes, e ele tem um incrível sistema de ramos para desenvolvimento não linear

# **Fluxo Básico

Para clonar o repositório principal, usamos:

```
git clone
```

Se realizarmos um alteração nos arquivos, precisamos documentá-los com:

```
git commit -m "Alterações Feitas"
```

E antes de enviar as alterações pro servidor remoto, precisamos checar se não foram feitas  outras alterações antes da nossa:

```
git pull
```

E, agora, enviamos as alterações:

```
git push
```