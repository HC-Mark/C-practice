#include <stdio.h>
#define range 10
int main(){
  //initialize necessary variable
  int chain [range] = {0};
  int temp;
  //initialize the array
  //store the input into an int array
  for(int i = 0; i< range ; i++){
    
    printf("enter number here: ");
    scanf("%d", &temp);

    if(temp == 0){
      break;
    }
    else{
      chain[i] = temp;
    }
  }

  //print it in original order
  for(int i = 0; i< range; i++){
    if(chain[i] == 0){
      break;
    }
    printf("%d\n", chain[i]);
  }

  //print it in reverse order
  for(int i = range -1; i >= 0; i--){
    if(chain[i] == 0){
      continue;
    }
    printf("%d\n", chain[i]);
  }
  
  return 0;
}
