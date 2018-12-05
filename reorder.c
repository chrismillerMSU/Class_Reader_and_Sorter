/*Christopher Miller
 *11/25/2018
 */

#include <stdio.h>
#include <string.h>
#include "class.h"
//This method sorts by either Time or Number as defined by int by
void reOrder( int by, classes_t* classes,int size){
    int i ,j,swap;
    classes_t curr;
    for(i=0;i<size;i++){   //Loop through ammount of objects as defined by size
	for(j=i;j<size;j++){
	    if(by == BYNUMBER){  //If sorting by number
		swap = strcmp(classes[i].classNumber,classes[j].classNumber); //Check if need to swap
	    }
	    else if(by == BYTIME){ //If sorting by time
		swap = strcmp(classes[i].classTime,classes[j].classTime); //Check if need to swap
	    }
	    else{
		printf("Error in reorder"); //print if by is not by time or by number
		break;
	    }
	    if(swap > 0){ //preform swap if needed
		curr = classes[i];
		classes[i] = classes[j];
		classes[j] = curr;
	    }
	}
    }
    getLevel(classes,size); //print to "output.txt`
}
