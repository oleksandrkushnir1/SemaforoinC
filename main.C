#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int pulsante = 1;
int i;

void setSemV(int pulsante){

  if(pulsante == 0){
  

  sleep(1);
  printf ("Il semaforo stradale: ⚪⚪🔴  \n"); 
  
  }
    
  else{
      printf ("Il semaforo stradale: 🟢⚪⚪  \n");
    }
  
}

void setSemP(int pulsante){

  if(pulsante == 0){


    printf ("Il semaforo pedonale : 🟢⚪  \n"); 
    sleep(10);
    
      for (i = 0; i < 5; i++) {
        printf(" Il semaforo pedonale:🟡🟡 \n");
        sleep(1);
        printf(" Il semaforo pedonale:⚪⚪ \n");
        sleep(1);
        
      }
   
    
   }
  else {
    printf("Il semaforo pedonale:⚪🔴 \n");
  }
}
  
  

int main (){
  
  for(;;){
    system("clear");
    setSemP(pulsante);
    setSemV(pulsante);
    printf ("Il pulsante è stato premuto? (true = 0): ");
    scanf ("%d", &pulsante);
    system("clear");
    setSemV(pulsante);
    setSemP(pulsante);
    pulsante = 1;
  }

  
}
