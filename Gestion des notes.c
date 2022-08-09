#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,reussi=0;
    float T1[13],T2[15];
    float max,min;

        printf("\n classe 1\n");
        for( i = 0 ; i < 13 ; i++){
            printf("saisir la moyenne %d :\n",i+1);
            scanf("%f", &T1[i]);
        }
             max = T1[0];
             min = T1[0];
        for( i = 0 ; i < 13 ; i++){
            if( max < T1[i]){
               max = T1[i];
            }
            if( min > T1[i]){
                min = T1[i];
            }
             if( T1[i] >= 10){
                reussi ++ ;
             }
        }
        printf("la plus grande moyenne est : %f\nla plus petite moyenne est : %f\nle nombre des eleves reussir est : %d\n",max,min,reussi);
        printf("/////////////////////////////////////////////////////");
        printf("\n classe 2\n");
        reussi =0;
        for(i = 0 ; i < 15 ; i++){
            printf("saisir la moyenne %d :\n",i+1);
            scanf("%f", &T2[i]);
        }
             max = T2[0];
             min = T2[0];
        for( i = 0 ; i < 15 ; i++){
            if( max < T2[i]){
               max = T2[i];
            }
            if( min > T2[i]){
                min = T2[i];
            }
             if( T2[i] >= 10){
                reussi ++ ;
             }
        }
        printf("la plus grande moyenne est : %f\nla plus petite moyenne est : %f\nle nombre des eleves reussir est : %d\n",max,min,reussi);

    return 0;
}
