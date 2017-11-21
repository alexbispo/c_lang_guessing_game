#include <stdio.h>

int main(){
  printf("********************************\n");
  printf("* Bem vindo ao jogo do palpite *\n");
  printf("********************************\n");

  int secretNumber = 42;

  int guess = 0;
  int guessing_number = 1;

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

    guessing_number++;
  }

  printf("\n");
  printf("\n");
  printf("Fim do jogo!");
  printf("\n");
  printf("Total de tentativas %d", guessing_number);
  printf("\n");

}