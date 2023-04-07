#include <stdio.h>
#include <string.h>

int main()
{   
    /*programın amacı Geçerli bir (IPv4) IP adresi verildiğinde, bu IP adresindeki her "." noktasını "(.)" ile değiştirmektir. */
    char ipAdresi[16]; //ip adresinin max hanesine göre dizi sayısını belirledik.
    printf("IPv4 adresini girin: ");
    scanf("%s", ipAdresi);//adresi kullanıcıdan aldık

    printf("Degistirilmis IP adresi: ", ipAdresi);//degistirilmis ip adresi alttaki for dongusunden çıkanlar sonucunda bu ifadenin yanına yazılacak.
    // i sayısını dizilerin genel özelliğine göre 0'dan baslattım
    for(int i = 0; i < strlen(ipAdresi); i++)//for döngüsü ip adresinin içerdiği sayı kadar donecek
    {
        if(ipAdresi[i] == '.')// bu döngü ile "." olan yerlere "(.)" yazarak ip'yi değiştirecek.
        {
           printf("(.)"); 
        }
        else{
         printf("%c", ipAdresi[i]);//eger nokta yoksa da adresi oldugu gibi yazacak
        }
    }
    // bunun sonucunda örneğin 192.168.1.1 Degistirilmis IP adresi: 192(.)168(.)1(.)1 diye dönecektir.



}
