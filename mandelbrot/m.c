#include   <stdio.h>
#include <complex.h>
#include  <unistd.h>








                char s[81];double complex z,c;int x=2016,y,m
                ,n;int main(){while(++m>0){for(y=0;y<24;y++)
                {for(x=0;x< /******************/ 80;x++){z=(
                x/24.+y/12. /*     ASCII      */ *I-2.)/m-1.
                *I;for(n=0, /*   mandelbrot   */ c=0;cabs(c)
                <4.&&++n  < /******************/ 999;c=c*c+z
                );s[x]=" .-:=0#*:"[n%9]/* m4n */;}puts(s) ;}
                usleep(2<<16);puts("\e[1;1H\e[2J");m*=1.1;}}







