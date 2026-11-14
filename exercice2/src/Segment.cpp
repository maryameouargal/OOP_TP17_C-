#include "Segment.h"

Segment::Segment() {
    // Both endpoints default to (0,0)
}

Segment::Segment(const Point& a, const Point& b) {
    start = a;
    end   = b;
}

Point Segment::getStart() const { return start; }
Point Segment::getEnd()   const { return end; }

double Segment::longueur() const {
    return start.distanceTo(end);
}