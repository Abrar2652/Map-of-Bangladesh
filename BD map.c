#include <stdio.h>
#include<string.h>
int main()
{
    char str[] = "ED..GDAD..DLEB..COCC..CV..FS..HQ..JN..MP..Go..Cr..Cq..Cp..Fk..Jf..J`..I`..H`ID..J^HE..K^FG..N[ABCG..L`CG..MTBT..MUCS..NTDBCBAJ..NUBBHI..OTMI..OROI..OGDCSI..PE[I..RC[I..rBDB..rB..sB..tB";
    int c, i;
    for (i = 0; i < strlen(str); i++){
        c = str[i]-64;//for E, c=69-64=5 and i = 0 so will print space for 5 times
        if(str[i]==46){
            putchar(10);//print newline if find '.'
            ++i;
        }
        else if (i%2 == 0){
            while(c != 0 && i != strlen(str)/2){
                putchar(32);//for even, print space
                c--;
            }
        }
        else if (i == strlen(str)/2)
        {
            printf("Tribute//From//Abrar");
        }
        else{
            while(c!=0 && i != strlen(str)/2){
                putchar('!');//for odd, print !
                c--;
            }
        }
    }
}
