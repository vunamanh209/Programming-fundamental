#include<stdio.h>
#include<stdlib.h>

int dien_tich(int chieu_dai, int chieu_rong){
return (chieu_dai+chieu_rong)*2;
}

int chu_vi(int chieu_dai, int chieu_rong){

return chieu_dai*chieu_rong;
}
int main() {
  	system("cls");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int chieu_dai, chieu_rong, dt,cv;
  	scanf("%d %d", &chieu_dai, &chieu_rong);
  	
  	dt = dien_tich(chieu_dai, chieu_rong);
  	cv = chu_vi(chieu_dai, chieu_rong);
	
	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	
	printf("dien tich %d\n", dt);
	printf("chu vi %d", cv);
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
  	system("pause");
  	return(0);  
}

