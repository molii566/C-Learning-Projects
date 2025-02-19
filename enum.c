#include <stdio.h>
#include <stdlib.h>


enum day {sun , mon , tue , wen , thur , fri , sat};
int main() {
    enum  day today = mon ;
    
    if (today == sun || today == sat){
        printf("wow waa fasax bashaala\n" );

    }
     else {
        printf("akhas waa jamacad kusheegi");
     }
    return 0;
}