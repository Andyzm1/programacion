#include <stdio.h>

int main(void) {
  int op, piso, ascensor, mp;
  ascensor=0;
  printf("Seleccione una opción\n");
  printf("1. Llamar ascensor\n");
  printf("2. Seleccionar piso \n");
  printf("3. Mostrar piso actual \n");
  printf("4. Salir\n");
  scanf("%d", &op);    
  while(op!=4){
    if (op>=1 & op<=3){
      switch (op){
        case 1:
          printf("Ingrese el piso en el que está\n");  
          scanf("%d", &piso);
          if(piso<0 || piso>9){
            while(piso<0 || piso>9){
              printf("El piso seleccionado no existe inténtelo nuevamente\n");
            printf("Ingrese el piso en el que está\n");  
            scanf("%d", &piso);
            }
          }
          printf("Llamando ascensor\n");
          if(piso<ascensor){
            while(ascensor!=piso){
              printf("El ascensor está en el piso %i\n", ascensor);
              ascensor=ascensor-1;
            }
          }
          if (piso>ascensor){
            while(ascensor!=piso){
              printf("El ascensor está en el piso %i\n", ascensor);
              ascensor=ascensor+1;
            }
          } 
          if (piso==ascensor){
            printf("El ascensor está aquí\n");
          }
          break;
        case 2:
        printf("Ingrese el piso al que desea ir\n");  
        scanf("%d", &piso);
          if(piso<0 || piso>9){
            while(piso<0 || piso>9){
              printf("El piso seleccionado no existe inténtelo nuevamente\n");
            printf("Ingrese el piso al que desea ir\n");  
            scanf("%d", &piso);
            }
          }
            for(ascensor=ascensor; ascensor<=piso-1; ascensor++){
            printf("El ascensor está en el piso %i\n", ascensor);
            if (piso==ascensor){
            printf("Ha llegado al piso %i\n", ascensor);
          }
          }
          for(ascensor=ascensor; ascensor>=piso+1; ascensor--){
            printf("El ascensor está en el piso %i\n", ascensor);
            if (piso==ascensor){
            printf("Ha llegado al piso %i\n", ascensor);
          }
          }       
          if (piso==ascensor){
            printf("Ha llegado al piso %i\n", ascensor);
          }
        break;
        case 3:
        mp=ascensor;
        switch (mp){
        case 0:
         printf("El ascensor está en la planta baja\n");
        break;
        case 1:
          printf("El ascensor está en el primer piso\n");
        break;
        case 2:
          printf("El ascensor está en el segundo piso\n");
        break;
        case 3:
          printf("El ascensor está en el tercer piso\n");
        break;
        case 4:
          printf("El ascensor está en el cuarto piso\n");
        break;
        case 5:
          printf("El ascensor está en el quinto piso\n");
        break;
        case 6:
          printf("El ascensor está en el sexto piso\n");
        break;
        case 7:
          printf("El ascensor está en el séptimo piso\n");
        break;
        case 8:
          printf("El ascensor está en el octavo piso\n");
        break;
        case 9:
          printf("El ascensor está en el noveno piso\n");
        break;
        }
        break;
      }
      printf("Seleccione una opción\n");
      printf("1. Llamar ascensor\n");
      printf("2. Seleccionar piso \n");
      printf("3. Mostrar piso actual \n");
      printf("4. Salir\n");
      scanf("%d", &op);    
    }
    else {
    printf("Opción inválida, inténtelo nuevamente\n");
    printf("Seleccione una opción\n");
    printf("1. Llamar ascensor\n");
    printf("2. Seleccionar piso \n");
    printf("3. Mostrar piso actual \n");
    printf("4. Salir\n");
    scanf("%d", &op); 
    }
    }  
    printf("Tenga un lindo día");
    return 0;
}
  