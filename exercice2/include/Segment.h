#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"

class Segment {
private:
    Point start;
    Point end;

public:
    Segment();
    Segment(const Point& a, const Point& b);

    Point getStart() const;
    Point getEnd() const;

    double longueur() const;
};

#endif