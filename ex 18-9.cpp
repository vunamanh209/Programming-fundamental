#include<stdio.h>
#include<stdlib.h>

int n, giai_thua = 1;
void nhap() {
  		printf("Nhap so n= ");
  		scanf("%d",&n);
	  }
	int tinh_giai_thua(){
		int i, gt = 1;
		for(i = 1; i <= n ; i++){
			gt = gt*i;
		}
		return gt;
	}
	void in_ket_qua(){
		printf("Giai thua cua %d la %d", n , giai_thua);
	}
int main() {
  	system("cls");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    nhap();
    giai_thua = tinh_giai_thua();
	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	in_ket_qua();
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
  	system("pause");
  	return(0);  
}

