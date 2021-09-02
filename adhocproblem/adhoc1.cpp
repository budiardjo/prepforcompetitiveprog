#include <stdio.h>
#include <math.h>
int y,Y,i,j,m; // Year y
double f,w; // f: the sum of accumulation for log2 i
main(){
 while (1 == scanf("%d",&y) && y){ //Input test cases
 w = log(4);
 for (Y=1960; Y<=y; Y+=10){
 w *= 2;
 }
 i = 1; //accumulation log2 i until larger than w
 f = 0;
 while (f < w) {
 f += log((double)++i);
 }
 printf("%d\n",i-1); //Output the Factstone rating
 }
 if (y) printf("fishy ending %d\n",y);
}
