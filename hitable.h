#ifndef __HITABLE_H__
#define __HITABLE_H__

#include "ray.h"

struct hit_record {
    vec_type t; // double?
    vec3 p;
    vec3 normal;
};


class hitable {
 public:
    virtual bool hit(const ray& r, vec_type t_min, vec_type t_max, hit_record& rec) const = 0;

};

#endif /* __HITABLE_H__ */
