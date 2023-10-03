#include <stdio.h>
/*


*/
int main(void) {
int a;
int sifre;
int bakiye;
int hesapnum;
int kredipuani;
int kredi;
int x;
hatalisifre : 
printf("Kart Sifrenizi Giriniz");
scanf("%d",&sifre);

if(sifre != 1234){

printf("Sifreniz Hatali Lutfen ");
goto hatalisifre;
}
tekrar11:
printf("\nIslemler\n 1- Para Yatirma\n 2- Para Cekme\n 3- Hesap Bakiyesi Goruntule\n 4- Para Gonder\n 5- Kredi Cekme\n 6- Kart iade\n");
scanf("%d",&a);
switch (a){
	case 1 :
		printf("Yatiracaginiz Bakiyeyi Giriniz.");
		scanf("%d", &bakiye);
		printf("Onaylayiniz.\n");
		printf("------------------ \n");
		printf("Isleminiz Basari Ile Gerceklestirildi.\n");
	break ;
	case 2 :
		printf("Cekeceginiz Bakiyeyi Giriniz.");
		scanf("%d", &bakiye);
		printf("Onaylayiniz.\n");
		printf("------------------ \n");
		printf("Isleminiz Basari Ile Gerceklestirildi.\n");
	break ;
	case 3 :
		printf("Hesap Bakiyeniz Bilinmiyor.\n");
	break ;
	case 4 :
		printf("Gondereceginiz Bakiyeyi Giriniz.\n");
		scanf("%d", &bakiye);
		printf("Gondereceginiz Hesap Numarasini Giriniz.");
		scanf("%d", &hesapnum);
		printf("Onaylayiniz.\n");
		printf("------------------ \n");
		printf("Isleminiz Basari Ile Gerceklestirildi.\n");
	break ;
  case 5:
  
  printf("Kredi Puaninizi giriniz.");
  bas:
  scanf("%d",&kredipuani);
  if (kredipuani>=70 && kredipuani<=100)
  {
    x=1;
  }
  else if (kredipuani>=50 && kredipuani<70)
  {
    x=2;
  }
  else if (kredipuani<50)
  {
    x=3;
  }
  switch(x)
  {
    case 1:
    printf("10.000 TL'ye kadar kredi çekebilirsiniz.\nKredi Çekmek İstediginiz Tutari Giriniz.\n");
   tekrar: 
    scanf("%d",&kredi);
     if (kredi<=10000)
    {
      printf("Paranizi Alin Aq");
      goto tekrar11;
    }
    else if (kredi>10000 || kredi < 0)
    {
      printf("Girdiginiz deger gecersiz.\nTekrar Giriniz.\n");
      goto tekrar;
    }
    break;
    case 2:
    printf("5000 TL'ye kadar kredi cekebilirsiniz.\nKredi Çekmek İstediginiz Tutari Giriniz.\n ");
    tekrar1:
    scanf("%d",&kredi);
     if (kredi<=5000)
    {
      printf("Paranizi Aliniz");
      goto tekrar11;
    }
    else if (kredi>5000 || kredi < 0)
    {
      printf("Girdiginiz deger gecersiz.\nTekrar Giriniz.\n");
      goto tekrar1;
    }
    break;
    case 3:
    printf("Kredi cekemezsiniz.Sadece 1000 TL'ye kadar İhtiyac kredisi cekebilirsiniz.\nKredi Çekmek İstediginiz Tutari Giriniz.\n ");
    tekrar2:
    scanf("%d",&kredi);
     if (kredi<=1000)
    {
      printf("Paranizi Aliniz");
      goto tekrar11;
    }
    else if (kredi>1000 || kredi < 0)
    {
      printf("Girdiginiz deger gecersiz.\nTekrar Giriniz.\n");
      goto tekrar2;
    }
    break;
    default:
    printf("Girdiginiz kredipuani gecersizdir.\nTekrar Giriniz.\n");
    goto bas;

    

  }


  case 6 :
  printf("Kartinizi Aliniz İyi Günler Dileriz");
break;
	default :
		printf("Sectiginiz Islem Gecersizdir.\n");
		goto tekrar11;
}
return 0;
}


