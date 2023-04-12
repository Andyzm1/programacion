#include <stdio.h>
#include <time.h>

int main(void) {
  int arma, progreso, salud, historia, a, ataque, op, drak, chain, bruja;
  a=0;
  progreso=1;
  salud=150;
  drak=80;
  chain=90;
  bruja=50;
  printf("Bienvenido a Adventure Way.\n");
  printf("Para esta aventura debes seleccionar un arma.\n");
  printf("Elige un arma.\n 1.Pistola\n 2.Espada\n 3.Arco\n");
  scanf("%d", &arma);
  if(arma<1 || arma>3 && arma!=619){
    do{
    printf("Arma inexistente\n");
    printf("Elige un arma.\n 1.Pistola\n 2.Espada\n 3.Arco\n");
    scanf("%d", &arma);
  }while(arma<1 || arma>3 && arma!=619);
  }
  switch(arma){
    case 1:
      printf("Excelente has seleccionado la pistola, cuentas con 12 disparos(13 puntos de ataque por disparo)\n");
      ataque=12*13;
    break;
    case 2:
      printf("Excelente has seleccionado la espada, cuentas con 16 golpes(15 puntos de ataque por golpe)\n");
      ataque=16*15;
    break;
    case 3:
      printf("Excelente has seleccionado el arco, cuentas con 15 tiros(9 puntos de ataque por tiro)\n");
      ataque=15*9;
    break;
    case 619:
      printf("Haz encontrado el arma secreta, el sable laser, cuentas con 20 golpes(30 puntos de ataque por golpe) y te otorga la habilidad jedi aumentado tu salud 80 puntos\n");
      ataque=20*25;
      salud=salud+80;
    break;
  }
  printf("Cuentas con %d puntos de salud, cuidate de los monstruos y maldiciones.\n", salud);
//situaciones      
  while(progreso<=2 && salud>0){
    srand(time(NULL));
    historia=rand() % 5+1;
    if(historia==a){
      do{
        srand(time(NULL));
        historia=rand() % 5+1;
      }while(historia==a);
    }
    a=historia;
    printf("\n");
    switch(historia){
    case 1:
      printf("Te has encontrado con Yoshi, decide que quieres hacer\n 1.Hacerte amigo\n 2.Matar\n");
      scanf("%d", &op);
      while(op<1 || op>2){
        printf("Accion invalida.\n Selecciona que es lo que quieres hacer.\n 1.Hacerte amigo\n 2.Matar\n");
        scanf("%d", &op);
      }
      switch(op){
          case 1:
            salud=salud+50;
            printf("Felicitaciones al hacerte amigo de Yoshi, tu salud ha aumentado a %d.\n", salud);
          break;
           case 2:
            salud=salud-100;
            ataque=ataque-45;
            printf("El queria ser tu amigo :(, al matar a Yoshi te ha caido la madicion green egg, tu salud a disminuido a %d.\n", salud);
          break;
        }
      progreso=progreso+1;
    break;
    case 2:
      printf("Te has encontrado con Drak Mound, decide que quieres hacer\n 1.Pelear\n 2.Huir\n");
      scanf("%d", &op);
      while(op<1 || op>2){
        printf("Accion invalida.\n Selecciona que es lo que quieres hacer.\n 1.Pelear\n 2.Huir\n");
        scanf("%d", &op);
      }
      switch(op){
          case 1:
            if(ataque>drak){
              salud=salud-75;
              ataque=ataque-80;
              if(salud>0){
               printf("Has logrado sobrevivir de Drak Mound, tu salud ahora es %d.\n", salud);
              }
              else{
                printf("Drak Mound ha terminado contigo\n");
              }
            }
            else{
              printf("Drak Mound ha terminado contigo\n");
              salud=0;
            }
          break;
           case 2:
            salud=salud-38;
            printf("Al huir Drak Mound te ataco y tu salud a disminuido a %d.\n", salud);
          break;
        }
      progreso=progreso+1;
    break;
    case 3:
      printf("Te has encontrado con el Mago, decide que quieres hacer\n 1.Pedir un truco\n 2.Ignorar\n");
      scanf("%d", &op);
      while(op<1 || op>2){
        printf("Accion invalida.\n Selecciona que es lo que quieres hacer.\n 1.Pedir un truco\n 2.Ignorar\n");
        scanf("%d", &op);
      }
      switch(op){
          case 1:
            ataque=ataque+15;
            salud=salud+25;
            printf("El mago te ha ayudado, te ha hechizado aumentando tus puntos de ataque y salud, tus puntos de salud ahora son %d\n", salud);
          break;
          case 2:
            printf("Era un mago bueno te podia haber ayudado\n");
          break;
          
        }
      progreso=progreso+1;
    break;
    case 4:
      printf("Te has encontrado con Chain Chomp, decide que quieres hacer\n 1.Pelear\n 2.Esconderte\n");
      scanf("%d", &op);
      while(op<1 || op>2){
        printf("Accion invalida.\n Selecciona que es lo que quieres hacer.\n 1.Pelear\n 2.Esconderte\n");
        scanf("%d", &op);
      }
      switch(op){
          case 1:
            if(ataque>chain){
              salud=salud-65;
              ataque=ataque-95;
              if(salud>0){
               printf("Has logrado sobrevivir a los dientes de Chain Chomp, tu salud ahora es %d.\n", salud);
              }
              else{
                printf("Chain Chomp te ha devorado\n");
              }
            }
            else{
              printf("Chain Chomp te ha devorado\n");
              salud=0;
            }
          break;
           case 2:
            salud=salud-40;
            printf("Al esconderte Chain Chomp te ataco y tu salud a disminuido a %d.\n", salud);
          break;
        }
      progreso=progreso+1;
    break;
    case 5:
      printf("Te has encontrado con la bruja Wichi Pichi, decide que quieres hacer\n 1.Pedir ayuda\n 2.Atacar\n");
      scanf("%d", &op);
      while(op<1 || op>2){
        printf("Accion invalida.\n Selecciona que es lo que quieres hacer.\n 1.Pedir ayuda\n 2.Atacar\n");
        scanf("%d", &op);
      }
      switch(op){
          case 1:
            salud=salud+40;
            ataque=ataque+25;
            printf("Wichi Pichi es una bruja buena, ha arreglado tu arma y te ha dado una pocion aumentando tu salud a %d.\n", salud);
          break;
           case 2:
            if(ataque>bruja){
              salud=salud-95;
              ataque=ataque-65;
              if(salud>0){
                printf("Era una bruja buena y has acabado con ella :(, pero has logrado sobrevivir, tu salud ahora es %d.\n", salud);
              }
              else{
                printf("Era una bruja buena y has intentado acabar con ella, pero ella termino contigo\n");
              }
            }
            else{
              printf("Era una bruja buena y has intentado acabar con ella, pero ella termino contigo\n");
              salud=0;
            }
          break;
        }
      progreso=progreso+1;
    break;
  }
  }
  if(salud>0){
    printf("Felicitaciones has superado el juego.\nEres un Adventure Way Master.\n");
  }
  else
    printf("Has muerto.\nJuego terminado.");
  return 0;
}