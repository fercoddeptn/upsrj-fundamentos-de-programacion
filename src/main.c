  #include <stdio.h>

int main() {
     float L;
    
             int area;
             int volumen;

    printf("introduzca la longitud del lado:");
    scanf("%f", &L);

   area = L * L;
   volumen = L * L * L;
    
    printf("area:%i\nvolumen:%i\n", area, volumen);

  return 0;
}