//
// Created by nt024762 on 12/14/2023.
//

//
// Created by Olcay Taner YILDIZ on 15.05.2023.
//

#include "Path.h"

Path::Path(int distance, int previous) {
    this->distance = distance;
    this->previous = previous;
}

int Path::getDistance() const{
    return distance;
}

void Path::setDistance(int _distance) {
    this->distance = _distance;
}

void Path::setPrevious(int _previous) {
    this->previous = _previous;
}