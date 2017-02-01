#include <stdio.h>
#include <math.h>
#define money 100;

int main(){
  //initialize the necessary variable
  int rate, year;//user input
  printf("how many years you want to save: ");
  scanf("%d", &year);
  printf("what is the interest rate: ");
  scanf("%d", &rate);

  float refund[year];
  //the head of table
  printf("Years\t");
  for(int i = 0; i<5; i++){
    printf("%d%%\t",rate+i);
  }
  printf("\n");
  for(int i = 0; i < year ; i++){
    printf("%d\t", i+1);
    float time = i + 1;
    printf("%f\n", time);
    for(int j = 0; j< 5; j++){
      float interest = (rate + j) * 0.01 + 1;
      interest = powf(interest, time);
      // printf("%f\t", interest);
      float amount = 100 * &*interest;
      printf("%.2f ", amount);
    }
    printf("\n");
  }

  return 0;
}
