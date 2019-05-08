/*
 ============================================================================
 Name        : Pointer_Tests.c
 Author      : David Procter
 Version     : 000
 Copyright   : Copyright - David Procter
 Description : Pointer testing for variables and arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*==============================
 * Array Function prototype
================================*/
float array3D(float (*myA3)[3][3]);

int main(void) {

	/*==============================
	  	  Declarations
	================================*/
	float my3DArray[3][3][3];
	//int my2DArray[3][3];

	int a=15, b=45, c=18;
	float returnValue = 0;
	float d = 1.142;
	float e = 1;
	double f=118.334, g=742;

	/*==============================
	   Load the array with numbers
	================================*/
		for (int a=0; a<3; a++){
			for (int b=0; b<3; b++){
				for (int c=0; c<3; c++){
					my3DArray[a][b][c]= d * e;
					e++;
				}
			}

		}

		/*==============================
		 	 Print the variables
		================================*/
		printf(" Initialised variables\n");
		printf(" Number a (int): %d \n", a);
		printf(" Number b (int): %d \n", b);
		printf(" Number c (int): %d \n", c);
		printf(" Number d (float): %f \n", d);
		printf(" Number e (float): %f \n", e);
		printf(" Number f (double): %f \n", f);
		printf(" Number g (double): %f \n\n", g);

		/*
		printf("\n myArray2 is:");
		for (int cnt1=0; cnt1 < 3; cnt1++) {
			printf("\n");
			for (int cnt2=0; cnt2 < 3; cnt2++) {
				printf("(%d:%d)",cnt1,cnt2);
				printf("%f,", myArray2[cnt1][cnt2]);
			}
		}

		printf("\n\n");
		*/

		/*==============================
			Print the 3D array
		================================*/
		printf(" my3DArray is:");
		for (int a=0; a<3; a++){
			for (int b=0; b<3; b++){
				printf("\n");
				for (int c=0; c<3; c++){
					printf("(%d:%d:%d)",a,b,c);
					printf("%f,", my3DArray[a][b][c]);

				}
			}
		}
		printf("\n\n");

		/*=================================
		Send the 3D array to the function
		===================================*/
		returnValue = array3D(my3DArray);
		printf("\n Number returned to the function: %f \n\n", returnValue);


	puts("Test End");
	return EXIT_SUCCESS;
}

/*==============================
 * Array Function
================================*/
float array3D(float (*myA3)[3][3])  {

	float num=0;
	int numCnt=0;

	/*==============================
		Print first and last number
	================================*/
	printf(" First number in array3D: %f\n", myA3[0][0][0]);
	printf(" Last number in array3D: %f\n", myA3[2][2][2]);
	//printf(" Number in array3D: %f\n", myA3[0][0][2]);

	/*==============================
	Sum of numbers in the3D array
	================================*/
	for (int a=0; a<3; a++){
		for (int b=0; b<3; b++){
			for (int c=0; c<3; c++){
			num = num + myA3[a][b][c];
			numCnt++;
			}
		}
	}

	/*================================================
	Print results and send mean back to function call
	==================================================*/
	printf(" Sum of the numbers in array3D: %f \n", num);
	num=num/(float)numCnt;
	printf(" How many numbers in array3D: %d \n", numCnt);
	printf(" Mean of the numbers in array3D: %f \n", num);
	return num;
}
