# include <stdio.h>

int main(){
	
	int array[3][2][2] = {{{1,2},{3,4}}, {{5,6}, {7,8}}, {{9,10}, {11,12}}};
	int i,j,k;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k--){
				printf("Array[%d][%d][%d] = %d \n", i,j,k,array[i][j][k]);
			}
		}
	}
}

