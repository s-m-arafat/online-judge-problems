#include <iostream>
#include <cmath>
using namespace std;

const float PI = acos(-1);

void compute_sphere (float& v, float& s, float r){
    v = (4.0/3.0)*PI*r*r*r;
    s = 4*PI*r*r;
}
int main()
{
    float volume, surface, radius;
    cin>>radius;
    compute_sphere(volume,surface,radius);
    cout<<"volume: "<<volume<<" surface: "<<surface;
}
