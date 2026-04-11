#include <cmath>

#include "game.hpp"

float distance(Point2D a, Point2D b) {
    return sqrt(dx * dx + dy * dy);
}

bool collision(Circle circle1, Circle circle2) {
    return false;
}