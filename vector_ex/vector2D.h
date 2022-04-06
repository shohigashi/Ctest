#ifndef _VECTOR2D_H
#define _VECTOR2D_H

// 2d vector class
class Vector2D{
    protected:
        int m_x;
        int m_y;
    public:
        //constractor
        Vector2D();
        // set value
        void setValue(int x, int y);
        // get x-position
        int getX();
        // get y-position
        int getY();
    protected:
        // initialization
        void init();
};
#endif // _VECTOR2D_H
