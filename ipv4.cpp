#include <stdio.h>
#include <string.h>

int main()
{
    char ipAdresi[16]; //ip adresi max 16 hab
    printf("IPv4 adresini girin: ");
    scanf("%s", ipAdresi);//adresi kullanıcıdan aldık

    printf("Degistirilmis IP adresi: ", ipAdresi);
    
    for(int i = 0; i < strlen(ipAdresi); i++)//ip adresinin içerdiği sayı kadar donecek ve . olan yerlere (.) yazarak ip'yi etkisiz hale getirecek.
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
