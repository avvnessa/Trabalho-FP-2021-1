#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()



// DECLARANDO AS VARIAVEIS



{
// Armazena os nomes dos jogadores
    char jog1[26], jog2[26];
// Simulando um baralho de 52 cartas
    int baralho[52] = {1,2,3,4,5,6,7,8,9,10,10,10,10,
    1,2,3,4,5,6,7,8,9,10,10,10,10,
    1,2,3,4,5,6,7,8,9,10,10,10,10,
    1,2,3,4,5,6,7,8,9,10,10,10,10};
// Para o processo de "sorteio" da carta
    int sorte = 0;
    int cartsort = 0;
    int sortc = 0;
    char resp;
// Para armazenar a pontuação dos jogadores
    int pont1 = 0; //Jog1
    int pont2 = 0; //Jog2
// Uso do for
    int i;




// INTRODUÇÃO AO JOGO


setlocale(LC_ALL,"Portuguese");

printf ("\n\n\t\t\t\t\t\t\tOlá! Este é um simulador do jogo de cartas 21!\n");
 getch(); // Da uma pausa a cada printf
printf ("\n\tPronto para começar?\n");
 getch();
printf ("\n\tPrimeiro, algumas instruções:\n");
 getch();
printf ("\n\t> O 21 é jogado com um baralho comum, retirando apenas seus curingas.\n");
 getch();
printf ("\t> O objetivo de cada jogador é alcançar a maior pontuação sem que o valor ultrapasse 21.\n");
 getch();
printf ("\t> A pontuação é adquirida atraves da soma dos numeros das cartas.\n");
 getch();
printf ("\t> No 21, não interessa o naipe.\n");
 getch();
printf ("\t> O Às corresponde ao valor 1;\n");
 getch();
printf ("\t> Das cartas 2 a 10, cada valor corresponde ao seu respectivo numero;\n");
 getch();
printf ("\t> As cartas valete(J), rainha(Q) e rei(K) correspondem cada uma ao numero 10.\n");
 getch();
printf ("\n\tPara este simulador, contaremos com 2 jogadores.\n");
 getch();
printf ("\n\t> Se ambos atingirem a mesma pontução, a partida empata;\n");
 getch();
printf ("\t> Se ambos atingirem uma pontuação maior que 21, a partida não terá vencedor.\n");
 getch();
printf ("\n\tCada jogador comecará com 1 carta, que corresponderá à sua pontuação inicial.\n");
 getch();

printf ("\n\tVamos iniciar uma partida? Pressione Enter!\n");
  getch();

system("cls");



printf ("\n\n\t\t\t\t\t\t\t\t\tDIGITE SEU NOME:\n");


printf ("\n\tJogador 1:\n");
gets (jog1);
printf ("\n\tJogador 2:\n");
gets (jog2);

system("cls");


printf ("\n\n\t\t\t\t\t\t\t\t\t> PARTIDA INICIADA:  %s vs %s! < \n", jog1, jog2);



// COMANDOS DO JOGO



    srand(time(NULL));


        for (i=0; i<53; i++) {
               cartsort = rand()%52;
               sorte = baralho[cartsort];

               pont1 = sorte;

        } printf ("\n\n\n\t%s, sua carta inicial é %d. Sua pontuação é %d.\n", jog1, sorte, pont1);
         getch();
        printf("\tDeseja pegar uma carta? [S/N] \n");
              resp = getche();
              resp = toupper(resp);

        if (resp == 'S') {

                CICLO:;
                cartsort = rand()%52;
                sortc = baralho[cartsort];

                pont1 = pont1 + sortc;

                printf ("\n\tA carta sorteada foi: %d. Sua pontuação é %d.\n", sortc, pont1);
                 getch();
                printf("\tDeseja pegar outra carta? [S/N] \n");
                     resp = getche();
                     resp = toupper(resp);

                    if (resp == 'S') {
                       goto CICLO;
                    }
                    else (resp == 'N'); {
                            printf ("\n\n\n\t\tSua pontuação final foi %d!\n", pont1);
                            getch();
                            goto CICLOM;
                    }


       } else (resp == 'N'); {

       printf ("\n\n\n\t\tSua pontuação final foi %d!\n", pont1);

               CICLOM:;
               for (i=0; i<53; i++) {
               cartsort = rand()%52;
               sorte = baralho[cartsort];

               pont2 = sorte;

        printf ("\n\n\n\t%s, sua carta inicial é %d. Sua pontuação é %d.\n", jog2, sorte, pont2);
         getch();
        printf("\tDeseja pegar uma carta? [S/N] \n");
              resp = getche();
              resp = toupper(resp);

       if (resp == 'S') {

             CICLO2:;
               cartsort = rand()%52;
               sorte = baralho[cartsort];

               pont2 = pont2 + sorte;

               printf ("\n\tA carta sorteada foi: %d. Sua pontuação é %d.\n", sorte, pont2);
                getch();
               printf ("\tDeseja pegar uma carta? [S/N] \n");
                     resp = getche();
                     resp = toupper(resp);

            if (resp == 'S') {
               goto CICLO2;
              }
            else (resp == 'N'); {
               goto END;
                getch();
              }
            }

      else (resp == 'N'); {
      END:;
      printf ("\n\n\n\t\tSua pontuação final foi %d!\n", pont2);
       getch();



// CONDIÇÕES PARA DETERMINAR O VENCEDOR



CONDICOES:;
      if((pont1 <= 21) && (pont2 > 21)) { // Quando Jog1 atingir até 21 pontos e Jog2 ultrapassar 21;
        printf("\n\n\t\t\t\t\t\t\tParabéns %s, você foi o vencedor!\n\t\t\t\t\t\t\tVocê marcou %d pontos!", jog1, pont1);
        printf("\n\t\t\t\t\t\t\tEnquanto %s marcou %d pontos.\n\n\n", jog2,pont2);

    } else if((pont2 <= 21) && (pont1 > 21)) { // Quando Jog2 atingir até 21 pontos e Jog1 ultrapassar 21;
        printf("\n\n\t\t\t\t\t\t\tParabéns %s, você foi o vencedor!\n\t\t\t\t\t\t\tVocê marcou %d pontos!", jog2, pont2);
        printf("\n\t\t\t\t\t\t\tEnquanto %s marcou %d pontos.\n\n\n", jog1, pont1);

    } else if(pont2 == pont1) { // Quando os dois jogadores atingirem a mesma pontuação;
        printf("\n\n\t\t\t\t\t\t\tO jogo empatou!\n\t\t\t\t\t\t\t%s e %s marcaram %d pontos!\n\n\n", jog1, jog2, pont2);

    } else if((pont1 > pont2) && (pont1 <= 21) && (pont2 < 21)) { // Quando ambos jogadores atingirem menos de 21 pontos, mas pont1>pont2;
        printf("\n\n\t\t\t\t\t\t\tParabéns %s, você foi o vencedor!\n\t\t\t\t\t\t\tVocê marcou %d pontos!", jog1, pont1);
        printf("\n\t\t\t\t\t\t\tEnquanto %s marcou %d pontos.\n\n\n", jog2, pont2);

    } else if((pont2 > pont1) && (pont2 <= 21) && (pont1 < 21)) { // Quando ambos jogadores atingirem menos de 21 pontos, mas pont2>pont1;
        printf("\n\n\t\t\t\t\t\t\tParabéns %s, você foi o vencedor!\n\t\t\t\t\t\t\tVocê marcou %d pontos!", jog2, pont2);
        printf("\n\t\t\t\t\t\t\tEnquanto %s marcou %d pontos.\n\n\n", jog1, pont1);

    } else if ((pont1 > 21) && (pont2 > 21)) { // Quando os dois atingem mais de 21 pontos;
        printf("\n\n\t\t\t\t\t\t\tA partida não teve um vencedor!\n\t\t\t\t\t\t\t%s e %s marcaram mais que 21 pontos!\n\n\n", jog1, jog2);
    }

    getch();
   printf ("\t\t\t\t\t\t\tObrigada por jogar <3!\n\n");
    getch();

        return 0;

       }
     }
   }
 }
