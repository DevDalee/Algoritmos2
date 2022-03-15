#include <stdio.h>

void somaCom(float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 );

void main(){

    float rz1, iz1, rz2, iz2, rz3 = 0, iz3 = 0;

   scanf("%f %f %f %f", &rz1, &iz1, &rz2, &iz2);
   somaCom(rz1, iz1, rz2, iz2, &rz3, &iz3);
}

void somaCom(float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 ){
   
   float soma1 = 0, soma2 = 0;

   soma1 = rz1 + rz2;
   soma2 = iz1 + iz2;

   rz3 = &soma1;
   iz3 = &soma2;

   printf("%.1f + %.1fi\n", *rz3, *iz3);

}