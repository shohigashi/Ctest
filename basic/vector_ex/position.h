#ifndef _POSITION2D_H_
#define _POSITION2D_H_

#include "vector2D.h"

class Position2D : public Vector2D{
    public:
        // reset the position
        void resetPosition();
        // move
        void move(int dx, int dy);
};
#endif
