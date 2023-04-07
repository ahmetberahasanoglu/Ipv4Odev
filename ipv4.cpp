#include <stdio.h>
#include <string.h>

int main()
{
    char ipAdresi[16]; //ip adresi max 16 hab
    printf("IPv4 adresini girin: ");
    scanf("%s", ipAdresi);

    printf("Degistirilmis IP adresi: ", ipAdresi);
    for(int i = 0; i < strlen(ipAdresi); i++)
    {
        if(ipAdresi[i] == '.')
        {
           printf("(.)"); 
        }
        else{
         printf("%c", ipAdresi[i]);
        }
    }



}
