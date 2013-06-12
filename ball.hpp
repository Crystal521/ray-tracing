/// @file ball.hpp  @version 1.0 @date 06/11/2013
/// @author BlahGeek@Gmail.com
#ifndef H_BALL_
#define H_BALL_

#include "object.hpp"
#include "sphere.hpp"

class Ball: public Object{
    public:
        Sphere sphere;
        Ball(const Vec & _c, const Number _r, const Color & _co):
            sphere(_c, _r), Object(_co){}
        Ray reflect(const Ray & ray, Number t);
        Number closestIntersection(Ray & ray);
        void print() const ;
        Color lambert(const Ray & ray, Number t);
};

#endif

