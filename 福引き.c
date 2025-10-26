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
  printf("•Ÿˆø‚«ƒvƒƒOƒ‰ƒ€\n");
  printf("yŠeŠm—¦z\n");
  printf("“ÁÜ(%.1f“)\n", S_PROB/10.0);
  printf("‚P“™(%.1f“)\n", A_PROB/10.0);
  printf("‚Q“™(%.1f“)\n", B_PROB/10.0);
  printf("‚R“™(%.1f“)\n", C_PROB/10.0);
  printf("‚S“™(%.1f“)\n", D_PROB/10.0);
  
  do{
    printf("‰½‰ñ‰ñ‚µ‚Ü‚·‚©HF");
    scanf("%lu", &num);
    if(num <= 0)
      printf("Ä“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    else if(num > 1000 && num != 276118)
      printf("—~’£‚è‚Í—Ç‚­‚È‚¢\n");
  }while((num > 1000 && num != 276118) || num <= 0);
  if(num == 276118){
    printf("‰½‰ñ‰ñ‚µ‚Ü‚·‚©HF");
    scanf("%lu", &num);
  }

  printf("yŒ‹‰Êz\n");
  srand((unsigned)time(NULL));
  for(i = 0; i < num; i++){
    printf("%lu‰ñ–ÚF", i + 1);
    result = (rand() % 1000) + 1;
    if(result <= 1000 && result > (1000 - S_PROB)){
      printf("“ÁÜ!!!!\n");
      s++;
    }
    else if(result <= (1000 - S_PROB) && result > (1000 - (S_PROB + A_PROB))){
      printf("‚P“™!!!\n");
      a++;
    }
    else if(result <=  (1000 - (S_PROB + A_PROB)) && result >  (1000 - (S_PROB + A_PROB + B_PROB))){
      printf("‚Q“™!!\n");
      b++;
    }
    else if(result <= (1000 - (S_PROB + A_PROB + B_PROB)) && result > (1000 - (S_PROB + A_PROB + B_PROB + C_PROB))){
      printf("‚R“™!\n");
      c++;
    }
    else if(result <= (1000 - (S_PROB + A_PROB + B_PROB + C_PROB)) && result > (1000 - (S_PROB + A_PROB + B_PROB + C_PROB + D_PROB))){
      printf("‚S“™\n");
      d++;
    }
  }
  printf("yŒ‹‰Êˆê——z\n");
  printf("“ÁÜF%lu‰ñ\n", s);
  printf("Šm—¦F%.1f“\n\n", ((double)s/num) * 100.0);
  printf("‚P“™F%lu‰ñ\n", a);
  printf("Šm—¦F%.1f“\n\n", ((double)a/num) * 100.0);
  printf("‚Q“™F%lu‰ñ\n", b);
  printf("Šm—¦F%.1f“\n\n", ((double)b/num) * 100.0);
  printf("‚R“™F%lu‰ñ\n", c);
  printf("Šm—¦F%.1f“\n\n", ((double)c/num) * 100.0);
  printf("‚S“™F%lu‰ñ\n", d);
  printf("Šm—¦F%.1f“\n\n", ((double)d/num) * 100.0);
  printf("yŠeŠm—¦(Šm”F—p)z\n");
  printf("“ÁÜ(%.1f“)\n", S_PROB/10.0);
  printf("‚P“™(%.1f“)\n", A_PROB/10.0);
  printf("‚Q“™(%.1f“)\n", B_PROB/10.0);
  printf("‚R“™(%.1f“)\n", C_PROB/10.0);
  printf("‚S“™(%.1f“)\n", D_PROB/10.0);
  
  sleep(10);
  
  return 0;
}
