/*Note: I make a snarky comment below about loops, since most of this program was made before loops were introduced to me.
  However, in a testament to my laziness, I did not make the program any simpler by adding the loops i nagged about.*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    int closest, min_difference, hours, minutes, time;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    
    do {
        ch = getchar();
    } while (ch == ' ');
    
    switch(toupper(ch)){
        case 'A': break;
        case 'P': hours += 12; break;
    }

    time = minutes + 60*hours;

    closest = 1;
    min_difference = 1440;

    /*This problem would be a whole lot easier if the book had introduced for loops. Here goes nothing...
      If there was a better way to do this with what the book has given me so far, I don't know what it is.*/
    
    /*Flight 1 -> 8:00AM = 480 minutes from midnight*/
    if (time - 480 < min_difference && time - 480 >= 0) {
        closest = 1;
        min_difference = time - 480 ;
    }

    /*Flight 2 -> 9:43AM = 583 minutes from midnight*/
    if (time - 583 < min_difference && time - 583 >= 0) {
        closest = 2;
        min_difference = time - 583;
    }

    /*Flight 3 -> 11:19AM = 679 minutes from midnight*/
    if (time - 679 < min_difference && time - 679 >= 0) {
        closest = 3;
        min_difference = time - 679;
    }

    /*Flight 4 -> 12:47PM = 767 minutes from midnight*/
    if (time - 767 < min_difference && time - 767 >= 0) {
        closest = 4;
        min_difference = time - 767;
    }

    /*Flight 5 -> 2:00PM = 840 minutes from midnight*/
    if (time - 840 < min_difference && time - 840 >= 0) {
        closest = 5;
        min_difference = time - 840;
    }

    /*Flight 6 -> 3:45PM = 945 minutes from midnight*/
    if (time - 945 < min_difference && time - 945 >= 0) {
        closest = 6;
        min_difference = time - 945;
    }

    /*Flight 7 ->  = 7:00PM = 1140 minutes from midnight*/
    if (time - 1140 < min_difference && time - 1140 >= 0) {
        closest = 7;
        min_difference = time - 1140;
    }

    /*Flight 8 -> 9:45PM = 1305 minutes from midnight*/
    if (time - 1305 < min_difference && time - 1305 >= 0) {
        closest = 8;
        min_difference = time - 1305;
    }

    switch(closest) {
        case 1: printf("Closest departure time is 8:00AM, arriving at 10:16AM.\n");
                break;
        case 2: printf("Closest departure time is 9:43AM, arriving at 11:52AM.\n");
                break;
        case 3: printf("Closest departure time is 11:19AM, arriving at 1:31PM.\n");
                break;
        case 4: printf("Closest departure time is 12:47AM, arriving at 3:00PM.\n");
                break;
        case 5: printf("Closest departure time is 2:00PM, arriving at 4:08PM.\n");
                break;
        case 6: printf("Closest departure time is 3:45PM, arriving at 5:55PM.\n");
                break;
        case 7: printf("Closest departure time is 7:00PM, arriving at 9:20PM.\n");
                break;
        case 8: printf("Closest departure time is 9:45PM, arriving at 11:58PM.\n");
                break;
    }

    return 0;
}