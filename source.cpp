#include <bits/stdc++.h>
#include <math.h>

//{}
//~

using namespace std;

class RegularPolygon{
    private:
        int n;
        double angle;
    public:
        RegularPolygon(int x){
            n=x;
            angle=M_PI/n;}
        double area(double len){
            double s=len*len*n;
            s/=(4*tan(angle));
            return s;}
        double length(double a){
            double s=sqrt(4*a*tan(angle)/n);
            return s;}
};

int main() {
 
    

    
      
    return 0;
}
