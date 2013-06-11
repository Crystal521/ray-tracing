/// @file scene.hpp  @version 1.0 @date 06/11/2013
/// @author BlahGeek@Gmail.com
#ifndef H_SCENE_
#define H_SCENE_

#include "common.hpp"
#include "object.hpp"
#include "ray.hpp"
#include <vector>
using std::vector;

class Scene{
    public:
        vector<Object *> objects;
        vector<Vec> lights;

        Object * closestIntersection(Ray & ray, Number & ret_t);
        Color phong(Ray & view, Ray & view_reflect);

};

#endif

