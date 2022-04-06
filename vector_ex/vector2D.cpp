#include "vector2D.h"

// constractor
Vector2D::Vector2D()
{
    init();
}
// set value
void Vector2D::setValue(int x, int y)
{
    m_x = x; m_y = y;
}
// get x-position
int Vector2D::getX()
{
    return m_x;
}
// get y-position
int Vector2D::getY()
{
    return m_y;
}
void Vector2D::init()
{
    m_x=0; m_y = 0;
}

