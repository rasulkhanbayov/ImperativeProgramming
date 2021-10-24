#include <stdio.h>
 
int main () {
  char chess[8][8];
  chess[0][0]='R';
  chess[0][7]='R';
  chess[7][0]='R';
  chess[7][7]='R';
  chess[0][1]='N';
  chess[0][7]='N';
  chess[7][1]='N';
  chess[7][7]='N';
  chess[0][2]='B';
  chess[0][5]='B';
  chess[7][2]='B';
  chess[7][5]='B';
  chess[0][3]='Q';
  chess[7][3]='Q';
  chess[0][4]='K';
  chess[7][4]='K';
  for (int i=0;i<8;i++){
	  chess[1][i]='P';
	  }
for (int i=0;i<8;i++){
	  chess[6][i]='P';
	  }	  
  
  for(int i=2; i<6; i++) {
      for(int j=0;j<8;j++) {
         chess[i][j]=' ';
         if(j==8){
            printf("\n");
         }
      }
   }
 for(int i=0; i<8; i++) {
      for(int j=0;j<8;j++) {
         printf("%c", chess[i][j]);
         if(j==7){
            printf("\n");
         }
      }
   }
return 0;
}
