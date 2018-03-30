#include <iostream>

using namespace std;

class Vector2D
{
private:
    int x, y;
public:
    Vector2D(int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    bool operator == (const Vector2D & v)
    {
        return (x == v.x && y == v.y);
    }
    bool operator != (const Vector2D & v)
    {
        return(x!= v.x || y!= v.y);

    }
    Vector2D operator + (const Vector2D &v){
        return Vector2D(x + v.x , y + v.y);

    }
};

std::ostream& operator << (std::ostream& os, Vector2D& v)
{
    os << '(' << v.getX() << "; " << v.getY() << ')';
    return os;
}
int main(){
    return 0;

}
