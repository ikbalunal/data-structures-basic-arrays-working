#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


struct yiginVeri { //dizi işlemlerinde kullanacağım verileri içeren bir yığın tanımlıyorum
    
    int tumDeger;
    int dizi1[20];
    
};

struct yiginVeri i;
    
    void ekleme(struct yiginVeri *pointer1, int temp){
        
        if(pointer1->tumDeger==19) {
            printf("Yığın doldu!");
            
        }
        else {
            pointer1-> dizi1[(pointer1->tumDeger)++]=temp;
        }
      
    }
    

    void silme(struct yiginVeri *pointer2){
        
        if(pointer2->tumDeger==0){
            
            printf("Yığın boş!");
        }
        
        else {
            pointer2-> tumDeger--;
        }
        
        
    }

int main()
{
    int secim;
    int eklenecekSayi;
   while(1){
        printf("Lutfen bir secim yapin:\n 1. Ekleme \n 2.Silme \n 3.Listeleme \n 4.Cikis \n Seçiminiz: ");
  
    scanf("%d",&secim);
    
    
    if(secim==1){
        
        printf("\n Eklenecek sayıyı giriniz : ");
        scanf("%d",&eklenecekSayi);
        ekleme(&i,eklenecekSayi);
        
    }
    
    else if(secim==2){
        
        silme(&i);
    }
    
    else if(secim==3){
        
        if(i.tumDeger==0){
            printf("Dizi boş \n ");
        }
        
        else{
            printf("Oluşturduğunuz dizi:");
            
            for(int a=0;a<i.tumDeger;a++){
            printf("%d ",i.dizi1[a]);
            
            }
        }
    }
    
    else if(secim==4){
        
    printf("Cıkıs yapıyorsunuz");
    break;
    }
   }//while parantezi
    getchar();
    return 0;
}






