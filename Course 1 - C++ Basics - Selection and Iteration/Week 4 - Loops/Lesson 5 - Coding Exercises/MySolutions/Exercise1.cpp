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

    tina.shape("indented triangle");

    for (int i = 0; i < 3; i++) {
        tina.left(120);
        tina.forward(100);
    }
    
    //add code above this line
    
    screen.exitonclick();
    return 0;
    
}
