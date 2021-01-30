#include <stdio.h>
#define PENNY 1
#define NICKEL 5
#define DIME 10
#define QUARTER 25
#define HALFDOLLAR 50
#define DOLLAR 100
#define TENDOLLAR 1000
#define TWENTYDOLLAR 2000
#define FIFTYDOLLAR 5000
#define HUNDREDDOLLAR 10000
#define DIVIDE 100
int moneyCount(int P,int N,int D,int Q,int H,int Do,int T,int Tw,int F,int Hu){
int Total;
Total += P*PENNY + N*NICKEL + D*DIME + Q*QUARTER+ H*HALFDOLLAR+ Do*DOLLAR+ T*TENDOLLAR+ Tw*TWENTYDOLLAR+ F*FIFTYDOLLAR+ Hu*HUNDREDDOLLAR;
Total = Total/DIVIDE ;
printf ("Your Total Is: %d\n",Total);
return Total;


}