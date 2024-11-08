#include "oops.cpp"
float point :: distance(point p){
    return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}