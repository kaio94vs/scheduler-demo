/*Kaio Vieira dos Santos
 RA:156072*/

#include <stdio.h>

int main() {
  int a[5];
  int n, j,m;
  int flag=0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  int i;
  for (i=1; i<=n; i++) {
    flag=0;
    for(j=0;j<5; j++) {
      
      
      
      if  ( i%a[j] ==0 ){
	printf ("%d", j);
	flag=1;
      }
    }
    
      if (flag==0)
	printf ("-");
      
      printf ("\n");
     
    
    /* Imprime resultado da n-esima iteracao do scheduler */
  }

  return 0;
}