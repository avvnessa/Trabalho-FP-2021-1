# Jogo 21 em C

Este é o repositório para o jogo 21, um jogo de cartas simples, desenvolvido como um trabalho final da disciplina Fundamentos de Programação.

# Funcionalidade

O jogo é bastante simples. O jogador e o computador recebem duas cartas cada um. As cartas do jogador são exibidas na tela, enquanto apenas uma das cartas do computador é exibida. O objetivo do jogo é ter uma pontuação maior do que o computador, sem exceder 21.

# Regras

* Cada carta numerada tem o valor de seu número.
* As cartas "J", "Q" e "K" têm o valor de 10.
* O "Ás" pode ter o valor de 1 ou 11, dependendo do que for mais conveniente para o jogador.

# Fluxo de Jogo

1. O jogador e o computador recebem duas cartas cada um.
2. O jogador pode escolher entre pedir mais cartas ("hit") ou ficar com as cartas atuais ("stand").
3. Se a pontuação do jogador exceder 21, ele perde imediatamente.
4. Se o jogador ficar com suas cartas, o computador revela sua segunda carta e decide se deve continuar pedindo mais cartas ou ficar com o que tem.
5. Se a pontuação do computador exceder 21, o jogador ganha automaticamente.
6. Se o computador ficar com suas cartas, as pontuações do jogador e do computador são comparadas e o maior pontuador ganha.

# Como jogar

* Clone o repositório para sua máquina local.
* Compile o arquivo "main.c" usando um compilador C de sua escolha.
* Execute o arquivo compilado.
* Siga as instruções na tela para jogar.

