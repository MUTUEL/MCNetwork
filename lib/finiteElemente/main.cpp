#include <iostream>
#include <fstream>

#include <vector>
#include <limits.h>
#include "finiteElemente.h"


int main(int argc, char *argv[]){

    FiniteElemente finEle(1,3,1e3);


    finEle.setElectrode(0,0.5,0,10);
    finEle.setElectrode(0,0.5,2,10);
    // finEle.setElectrode(0.4,0.5,1,-10);
    finEle.setElectrode(0.2,0.3,2,-10);
    // finEle.setElectrode(0.7,0.8,3,10);

    // finEle.setElectrode(0,1,0,10);
    // finEle.setElectrode(0,1,1,10);
    // finEle.setElectrode(0,1,2,-10);
    // finEle.setElectrode(0,1,3,-10);

    finEle.run();

    std::cout<<"pot "<<finEle.getPotential(1.7,0.2)<<std::endl;



   return 0;
}