#include <stdio.h>
int main()
{
float Max, Min, h, s, v, r, g, b;
printf("Значения  R, G, B\n");
scanf("%f %f %f", &r, &g, &b);
r=r/255;
g=g/255;
b=b/255;
if (r>g  && r>b) Max = r;
else if (g>b  && g>r) Max = g;
else Max = b;
if (r<g  && r<b) Min = r;
else if (g<b  && g<r) Min = g;
else Min = b;
if (Max==Min) h=0;
if (Max==b && g>=b) h=60*((g-b)/(Max-Min));
if (Max==b && g<b) h=60*((g-b)/(Max-Min))+360;
if (Max==g) h=60*((b-r)/(Max-Min))+120;
if (Max==b) h=60*((r-g)/(Max-Min))+240;
if (Max==0) s=0;
else s=100*(1-Min/Max);
v=100*Max;
if ((0<=h) && (h<=360) && (s<=15) && (v>=65)) printf("белый цвет\n");
if ((0<=h) && (h<=360) && (0<=s) && (s<=100) && (v<=10)) printf("черный цвет\n");
if ((0<=h) && (h<=360) && (s<=15) && (10<=v) && (v<=65)) printf("серый цвет\n");
if ((h<=11) && (h>=351) && (s>=70) && (v>=10)) printf("красный цвет\n"); 
if ((h<=11) && (h>=351) && (s<=70) && (v>=10))  printf("розовый цвет\n");
if ((255<=h) && (h<=310) && (15<=s) && (s<=50) && (v>=10)) printf("темно-розовый\n");
if ((45<=h) && (h<=64) && (s>=15) && (v>=10)) printf("желтый цвет\n");
if ((11<=h) && (h<=45) && (s>=15) && (v>=75))  printf("оранжевый\n");
if ((11<=h) && (h<=45) && (s>=15) && (10<=v) && (v<=75)) printf("коричневый\n");
if ((64<=h) && (h<=150) && (s>=15) && (v>=10)) printf("зеленый\n");
if ((180<=h) && (h<=255) && (s>=15) && (v>=10)) printf("синий\n");
if ((255<=h) && (h<=310) && (s>=50) && (v>=10)) printf("фиолетовый\n");
printf(" h=%.2f s=%.2f v=%.2f\n",h,s,v);
 return(0);
}
