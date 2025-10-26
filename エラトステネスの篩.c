#include <stdio.h>
#include <math.h>
#include <unistd.h>
#define YOKO 10

void show(int a[][YOKO], int num1);
int get_sosuu(int sosuu);
void delete(int a[][YOKO], int num1, int sosuu);

int main(void){
  unsigned long int num1, num2 = 1, i, j, sho, roop, sosuu, kosuu = 0, count = 0;  
  printf("\n�y�G���g�X�e�l�X��⿁z\n\n");
  do{
    printf("�����܂ł̑f�������߂܂����F");
    scanf("%lu", &num1);
  }while(num1 <= 0 || num1 > 2147483647);
  sho = num1 / YOKO;
  int a[sho + 1][YOKO];
  /*�z��̏�����*/
  for(i = 0; i < sho; i++){
    for(j = 0; j < YOKO; j++, num2++){
      a[i][j] = num2;
    }
  }
  for(j = 0; j < (num1 % YOKO); j++, num2++){
    a[sho][j] = num2;
  }
  if(num1 < 10001)
    show(a, num1);
  printf("�v�Z���n�߂܂�\n");
  /*�f��������, ���̔{�����폜*/
  a[0][0] = 0;
  roop = sqrt(num1) + 1;
  for(i = 0; i < sho; i++){
    for(j = 0; j < YOKO; j++){
      sosuu = get_sosuu(a[i][j]);
      if(sosuu > 0 && sosuu <= roop)
	delete(a, num1, sosuu);
      else if(sosuu > roop)
	break;
    }
    if(sosuu > roop)
      break;
  }
  for(j = 0; j < (num1 % YOKO); j++){
    sosuu = get_sosuu(a[i][j]);
    if(sosuu > 0 && sosuu <= roop)
      delete(a, num1, sosuu);
    else if(sosuu > roop)
      break;
  }
  printf("�y���ʁz\n");
  show(a, num1);
  /*�f���̌��𐔂��đf�����i�[����z���錾����*/
  for(i = 0; i < sho; i++){
    for(j = 0; j < YOKO; j++){
      if(a[i][j] != 0)
	kosuu++;
    }
  }
  for(j = 0; j < (num1 % YOKO); j++){
    if(a[i][j] != 0)
      kosuu++;
  }
  if(kosuu > 0){
    int b[kosuu];
    /*�f�����i�[����*/
    for(i = 0; i < sho; i++){
      for(j = 0; j < YOKO; j++){
	if(a[i][j] != 0){
	  b[count] = a[i][j];
	  count++;
	}
      }
    }
    for(j = 0; j < (num1 % YOKO); j++){
      if(a[i][j] != 0){
	b[count] = a[i][j];
	count++;
      }
    }
    /*�f����\������*/
    printf("%lu�܂ł̑f����\n", num1);
    for(i = 0; i < kosuu; i++){
      if(i == 0)
	printf("%7d", b[i]);
      else if((i + 1) % 10 == 0)
	printf("%7d\n", b[i]);
      else
	printf("%7d", b[i]);
    }
    printf("\n�ł�\n�܂�, %lu�܂ł̑f����%lu����܂�\n", num1, kosuu);
  }
  else
    printf("%lu�܂ł̑f���͑��݂��܂���\n", num1);
	sleep(10);
  
  return 0;
}

void show(int a[][YOKO], int num1){
  int i, j, sho;

  sho = num1 / YOKO;
  for(i = 0; i < sho; i++){
    for(j = 0; j < YOKO; j++){
      if(a[i][j] == 0)
        printf("      x");
      else
        printf("%7d", a[i][j]);
    }
    printf("\n");
  }
  for(j = 0; j < (num1 % YOKO); j++){
    if(a[i][j] == 0)
      printf("      x");
    else
      printf("%7d", a[i][j]);
  }
  printf("\n");
}
int get_sosuu(int sosuu){
  int i, yakusuu = 0;
  for(i = 1; i <= sosuu; i++){
    if(sosuu % i == 0)
      yakusuu++;
  }
  if(yakusuu == 2)
    return sosuu;
  else
    return 0;
}

void delete(int a[][YOKO], int num1, int sosuu){
  int i, j, sho, count = 1;
  sho = num1 / YOKO;
  for(i = 0; i < sho; i++){
    for(j = 0; j < YOKO; j++){
      if(a[i][j] == sosuu)
	count--;
      else if(a[i][j] % sosuu == 0 && count == 0)
	a[i][j] = 0;
    }
  }
  for(j = 0; j < (num1 % YOKO); j++){
    if(a[i][j] == sosuu)
      count--;
    else if(a[i][j] % sosuu == 0 && count == 0)
      a[i][j] = 0;    
  }
}
