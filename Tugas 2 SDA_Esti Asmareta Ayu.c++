#include <stdio.h>

int main(){
 int a=10,b=15, c=27, t;
  int *p1, *p2, *p3;

  //Mengetahui alamat dari variabel a,b,dan c terlebih dahulu
  printf("--Alamat dari varibael a,b, dan c--\n");
  printf("alamat a nalamatnya sekarang =%p\n",&a);
  printf("alamat b nalamatnya sekarang =%p\n",&b);
  printf("alamat c nalamatnya sekarang =%p\n",&c);
  printf("\n");

  p1 = &a; //pointer p1 merujuk ada alamat variabel a (p1 <- &a)
  p2 = &b; //pointer p2 merujuk pada alamat variabel b (p2 <- &b)
  printf("alamat yang ditunjuk p1 =  %p\nnilai yang ditunjuk p1 =  %d\n",p1,*p1);
  printf("\n");
  printf("alamat yang ditunjuk p2 = %p\nnilai yang ditunjuk p2 =  %d\n",p2,*p2);
  printf("\n");

  //nilai pada pointer p1 merujuk pada nilai yang ada di variabel c (*p1 <- c)
  t = c;
  c = *p1;
  *p1 = t;
  printf("nilai yang ditunjuk p1 sekarang = %d\nalamatnya sekarang =%p\n",*p1,p1);
  printf("\n");

  //nilai  pada variabel a merujuk ada nilai pada pointer p2 (a <- *p2)
  t = *p2;
  *p2 = a;
  a = t;
  printf("nilai yang ditunjuk a sekarang = %d\nalamatnya sekarang =%p\n",a,&a);
  printf("\n");

  //nilai pada variabel b diubah menjadi 6 (b <- 6)
  t = 6;
  b = t;
  printf("nilai yang ditunjuk b sekarang = %d\nalamatnya sekarang =%p\n",b,&b);
  printf("\n");

  //pointer p3 merujuk pada alamat variabel b (p3 <- &b)
  p3 = &b;
  printf("nilai yang ditunjuk p3  = %d\nalamat yang ditunjuk p3 =%p\n",*p3,p3);
  printf("\n");

  //pointer p3 merujuk pada alamat variabel c (p3 <- &c)
  p3 = &c;
  printf("nilai yang ditunjuk p3 sekarang = %d\nalamatnya sekarang =%p\n",*p3,p3);
  printf("\n");

  //nilai pada pointer p1 merujuk pada nilai di pointer p2 (*p1 <- *p3)
  *p1 = *p3;
  printf("nilai yang ditunjuk p1 sekarang = %d\nalamatnya sekarang =%p\n",*p1,p1);
  printf("\n");

  //Mengetahui hasil akhir dari pertukaran
  printf("nilai p1 akhirnya = %d dan alamat = %p\n",*p1,p1);
  printf("nilai p2 akhirnya = %d dan alamat = %p\n",*p2,p2);
  printf("nilai p3 akhirnya = %d dan alamat = %p\n",*p3,p3);
  printf("nilai a akhirnya = %d dan alamat = %p\n",a,&a);
  printf("nilai b akhirnya = %d dan alamat = %p\n",b,&b);
  printf("nilai c akhirnya = %d dan alamat = %p\n",c,&c);
}
