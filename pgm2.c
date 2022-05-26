#include<stdio.h>
#include<time.h>
int main()
{
double time=0.0;
clock_t begin=clock();
sleep(3);
clock_t end=clock();
time+=(double)(end-begin)/CLOCKS_PER_SEC;
printf("time is %f seconds",time);
return 0;
}
