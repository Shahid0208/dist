#include "point.h"
#include <cmath>
distance(Point m, Point n) {
int p = m.x - n.x;
int q = m.y - n.y;
return sqrt(p*p + q*q);
}
