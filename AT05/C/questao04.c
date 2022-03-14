#include <stdio.h>

float rz1, iz1, rz2, iz2, rz3, iz3;

int main(){
   scanf("%f %f %f %f", &rz1, &iz1, &rz2, &iz2);
   somaCom(&rz1, &iz1, &rz2, &iz2, &rz3, &iz3);
   printf("%.1f + %.1fi\n", rz3, iz3);
}
void somaCom( float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 ){
   *rz3 = rz1 + rz2;
   *iz3 = iz1 + iz2;
}