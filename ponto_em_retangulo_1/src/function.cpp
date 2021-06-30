#include "function.h"

/*blz*/
location_t pt_in_rect(const Ponto &IE, const Ponto &SD, const Ponto &P){
    bool inSD, inIE;
    inSD = inIE = false;
    if(SD.x > P.x and SD.y > P.y) inSD = true; //Inside of the right-superior side
    if(IE.x < P.x and IE.y < P.y) inIE = true; //Inside of the left-inferior side

    if(inSD and inIE) return location_t::INSIDE;
    else{
        inSD = inIE = false;
        if(SD.x >= P.x and SD.y >= P.y) inSD = true; //Inside or in the edge of the right-superior side
        if(IE.x <= P.x and IE.y <= P.y) inIE = true; //Inside or in the edge of the left-inferior side
        if(inSD and inIE) return location_t::BORDER;
        else return location_t::OUTSIDE;
    }
}
