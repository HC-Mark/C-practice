#include <stdio.h>
#include <stdbool.h>
#define N 10
int main(){
  int input;
  bool digit_seen [10] = {false};

  printf("Enter a number here: ");
  scanf("%d", &input);

  while (input > 0){
    int temp = input % 10;
    if(digit_seen[temp]){
      break;
    }
    digit_seen[temp] = true;
    input = input / 10;
  }

  if(input > 0){
    printf("Repeated digit \n");
  }
  else{
    printf("No repeated digit.\n");
  }
  
  return 0;
}
