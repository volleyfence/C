#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define S_PROB 1*10
#define A_PROB 6*10
#define B_PROB 18*10
#define C_PROB 25*10
#define D_PROB 50*10

int main(void){
  unsigned long int result, s = 0, a = 0, b = 0, c = 0, d = 0;
  unsigned long int num, i;
  printf("�������v���O����\n");
  printf("�y�e�m���z\n");
  printf("����(%.1f��)\n", S_PROB/10.0);
  printf("�P��(%.1f��)\n", A_PROB/10.0);
  printf("�Q��(%.1f��)\n", B_PROB/10.0);
  printf("�R��(%.1f��)\n", C_PROB/10.0);
  printf("�S��(%.1f��)\n", D_PROB/10.0);
  
  do{
    printf("����񂵂܂����H�F");
    scanf("%lu", &num);
    if(num <= 0)
      printf("�ē��͂��Ă�������\n");
    else if(num > 1000 && num != 276118)
      printf("�~����͗ǂ��Ȃ�\n");
  }while((num > 1000 && num != 276118) || num <= 0);
  if(num == 276118){
    printf("����񂵂܂����H�F");
    scanf("%lu", &num);
  }

  printf("�y���ʁz\n");
  srand((unsigned)time(NULL));
  for(i = 0; i < num; i++){
    printf("%lu��ځF", i + 1);
    result = (rand() % 1000) + 1;
    if(result <= 1000 && result > (1000 - S_PROB)){
      printf("����!!!!\n");
      s++;
    }
    else if(result <= (1000 - S_PROB) && result > (1000 - (S_PROB + A_PROB))){
      printf("�P��!!!\n");
      a++;
    }
    else if(result <=  (1000 - (S_PROB + A_PROB)) && result >  (1000 - (S_PROB + A_PROB + B_PROB))){
      printf("�Q��!!\n");
      b++;
    }
    else if(result <= (1000 - (S_PROB + A_PROB + B_PROB)) && result > (1000 - (S_PROB + A_PROB + B_PROB + C_PROB))){
      printf("�R��!\n");
      c++;
    }
    else if(result <= (1000 - (S_PROB + A_PROB + B_PROB + C_PROB)) && result > (1000 - (S_PROB + A_PROB + B_PROB + C_PROB + D_PROB))){
      printf("�S��\n");
      d++;
    }
  }
  printf("�y���ʈꗗ�z\n");
  printf("���܁F%lu��\n", s);
  printf("�m���F%.1f��\n\n", ((double)s/num) * 100.0);
  printf("�P���F%lu��\n", a);
  printf("�m���F%.1f��\n\n", ((double)a/num) * 100.0);
  printf("�Q���F%lu��\n", b);
  printf("�m���F%.1f��\n\n", ((double)b/num) * 100.0);
  printf("�R���F%lu��\n", c);
  printf("�m���F%.1f��\n\n", ((double)c/num) * 100.0);
  printf("�S���F%lu��\n", d);
  printf("�m���F%.1f��\n\n", ((double)d/num) * 100.0);
  printf("�y�e�m��(�m�F�p)�z\n");
  printf("����(%.1f��)\n", S_PROB/10.0);
  printf("�P��(%.1f��)\n", A_PROB/10.0);
  printf("�Q��(%.1f��)\n", B_PROB/10.0);
  printf("�R��(%.1f��)\n", C_PROB/10.0);
  printf("�S��(%.1f��)\n", D_PROB/10.0);
  
  sleep(10);
  
  return 0;
}
