#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#define LF(l, b) for (l = 0; l < b; l++)
#define LB(l, b) for (l = b; l > 0; l--)
#define DS(v, a, b) v = (v < a ? a : (v > b ? b : v))
#define DW(str, p, ...) { int n = sprintf(s+(p), str, ## __VA_ARGS__); s[(p) + n] = ' '; }
#define DC(c, v1, v2) case c: if(s[a[0] + v1 + (b[0] + v2)*80] != '#') {d = v1; e = v2;} break;






              char s[1761];int a[1760];int b[1760];int d,e,l,h,
              c,m,i,j;struct termios t0, t1; FILE * f; int hz =
              333333; void f1(){i=rand()%20+30;j=rand()%20+1;DS
              (i,31,49);DS(j,2,20);}void f7(){h=h<l?l:h;printf(
              "GAME OVER\n");f=fopen("h.s","wb");if(!f)exit(1);
              fwrite(&h,4,1,f);fclose(f);exit(0);}void*f5(void*
              p){(void)p;tcgetattr(STDIN_FILENO,&t0);t1=t0; t1.
              c_lflag&=~(ICANON) ;
              tcsetattr( /* m4n */
              STDIN_FILENO,TCSANOW,
              &t1);while(1){c=getc
              (stdin);switch(c){DC
              ('w',0,-1)DC('s',0,1)
              DC('a',-1,0)DC('d',1,
              0)}}tcsetattr(STDIN_FILENO,TCSANOW,&t0);}void f6(
              ){while(1){s[a[l-1]+b[l-1]*80]=' ';LB(m,l){a[m]=a
              [m-1];b[m]=b[m-1];}a[l]=-1;b[l]=-1;a[0]+=d;b[0]+=
              e;if(a[0]<=30||a[0]>=50||b[0]<=1||b[0]>=21)f7() ;
              if(a[0]==i&&b[0]==j){l++;f1();printf("\a");}else{
              s[i+j*80]='o';}LB(m,l){if(a[m]==a[0]&& b[m]==b[0]
                                           ){f7();}}LF(m,l){s[a
                                           [m]+b[m]*80]='#';}DW
                                           ("Score: %d",250,l);
                                           DW("Highscore: %d" ,
                                           330,h) ; printf("\n"
                                           "\033[0;0f%s\n",s);
                                           usleep(hz--);} } int
              main(){srand(time(0));f=fopen("h.s","rb");if(!f )
              f7();fread(&h,4,1,f);fclose( f); for(m=0;m<1760 ;
              m++){s [m]=' ';}for(m=0;m<21;m++)/* IOCCC */ {s[m
              +110]='+' ;s[m+1710]='+';s[30+80* /* 2017 */(1+m)
              ]='+';s[50+80*(1+m)]='+';}s[1760]=0;l=1;a[0]=40;b
              [0]=11;f1();pthread_t t;pthread_create(&t, NULL ,
              f5,NULL);f6(); pthread_join(t,NULL);}////////////





