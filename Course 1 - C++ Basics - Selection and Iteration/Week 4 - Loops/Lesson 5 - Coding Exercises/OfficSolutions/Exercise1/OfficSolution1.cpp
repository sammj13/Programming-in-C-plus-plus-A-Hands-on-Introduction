////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
    
    TurtleScreen screen(400, 300); //You may edit the dimensions to fit your window
    Turtle tina(screen);
    tina.speed(TS_SLOWEST);
    
    //add code below this line

    /* The first step is to figure out the pattern that tina moves. 
     * First tina moves forward by 100 pixels. 
     * Then tina turns left 120 degrees. 
     * Thus tina's commands are tina.forward(100) and then tina.left(120). 
     * This pattern happens exactly three times.
     * 
     * Next is setting the loop so that tina's commands are iterated three times. Per requirements, your loop header should include int i = 0 and i++.
     */
    for(int i = 0; i < 3; i++) {
        tina.forward(100);
        tina.left(120);
    }
    
    //add code above this line
    
    screen.exitonclick();
    return 0;
    
}
