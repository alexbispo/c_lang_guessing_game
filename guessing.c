#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("********************************\n");
  printf("* Bem vindo ao jogo do palpite *\n");
  printf("********************************\n");

  srand(time(0));
  int secretNumber = rand() % 100;

  int guess = 0;
  int guessing_number = 1;
  double score = 1000;

  while(1){

    printf("\n");

    printf("Tentativa %d", guessing_number);

    printf("\n");
    printf("\n");
    
    printf("Digite um palpite:");
    printf("\n");
    scanf("%d", &guess);

    printf("\n");

    if(guess < 0){
      printf(">(");
      printf("\n");
      printf("O palpite deve ser um número positivo.");
      printf("\n");
      continue;
    }

    int hit = guess == secretNumber;
    int gt = guess > secretNumber;

    if(hit){
      printf("=)");
      printf("\n");
      printf("Parabéns você acertou!");
      break;
    } else if (gt){
      printf("=(");
      printf("\n");
      printf("Palpite maior que o número secreto.");
      printf("\n");
      printf("Tente novamente!");
      printf("\n");
    } else {
      printf("=(");
      printf("\n");
      printf("Palpite menor que o número secreto.");
      printf("\n");
      printf("Tente novamente!");
      printf("\n");
    }

    double lostScore = (abs(guess - secretNumber) / (double)2);
    score = score - lostScore; 

    guessing_number++;
  }

  printf("\n");
  printf("\n");
  printf("Fim do jogo!");
  printf("\n");
  printf("Total de tentativas %d", guessing_number);
  printf("\n");
  printf("Total de pontos %.1f", score);
  printf("\n");

}