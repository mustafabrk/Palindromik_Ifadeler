#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintDataToFile(char* FileName, char* msg)
{
    FILE* fp;
    fp = fopen(FileName,"w");
    if(fp == NULL)
        {
            printf("Dosya Bulunamad�");
        }
    fprintf(fp,msg);
    fclose(fp);
}



void PrintArray(char* pArr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
        {
            printf("%s\n", pArr[i]);
        }
}
void Palindromik()
{
    char kontrol;
    char arr[100];
    
    printf("Denetlenecek Veri Giriniz\n");
    gets(arr);
    // Kullan�c�dan veriyi ald�ktan sonra onu ba�ka bir diziye kopyalad�k.
    char arr2[100];
    strcpy(arr2,arr);
    //strrev fonksiyonu reverse i�lemi yapar. Kopyalayad���m�z diziyi ters �evirdik.
    strrev(arr2);

    //E�er ters �evrilmi� hali kendisine e�itse ifade palindromiktir.
    if(strcmp(arr,arr2) == 0)
        {
            printf("Ifade Palindromiktir ve dosyaya yazildi");
            FILE *fp;
            fp = fopen("Sinav.txt","a");
            if(fp == NULL)
                {
                    printf("Dosya Acilamadi");
                }
            fprintf(fp,arr);
            fprintf(fp,"\n");
            fclose(fp);
        }
    if(strcmp(arr,arr2) != 0)
        {
            printf("Ifade palindromik degildir.\n");
        }
    // Bir sonraki sefer i�in dizinin i�ini bo�altt�k
    int i;
    for(i = 0; i < 100; i++)
        {
            arr[i] == NULL;
            arr2[i] == NULL;
        }

    printf("Devam etmek istiyor musunuz? E/H\n");
    scanf("%s",&kontrol);
    while(kontrol == 'E' || kontrol == 'e')
        {
            fflush(stdin);
            Palindromik();
        }

 
    if(kontrol == 'H' || kontrol == 'h'){
        printf("Program Sonlandirilmistir.");
        exit(1);
    }


}


int main()
{
    Palindromik();
    return 0;
}

