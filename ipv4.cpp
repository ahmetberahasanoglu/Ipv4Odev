#include <stdio.h>
#include <string.h>

int main()
{
    char ipAdresi[16]; //ip adresi max 16 hab
    printf("IPv4 adresini girin: ");
    scanf("%s", ipAdresi);//adresi kullanıcıdan aldık

    printf("Degistirilmis IP adresi: ", ipAdresi);
    // i sayısını dizilerin genel özelliğine göre 0'dan baslattım
    for(int i = 0; i < strlen(ipAdresi); i++)//for döngüsü ip adresinin içerdiği sayı kadar donecek ve . olan yerlere (.) yazarak ip'yi değiştirecek.
    {
        if(ipAdresi[i] == '.')
        {
           printf("(.)"); 
        }
        else{
         printf("%c", ipAdresi[i]);
        }
    }
    // bunun sonucunda örneğin 192.168.1.1 Degistirilmis IP adresi: 192(.)168(.)1(.)1 diye dönecektir.



}
