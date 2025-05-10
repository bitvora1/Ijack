#ifndef VECTOR3_H
#define VECTOR3_H

#include "raylib.h"

class ObjectTransform{

    public:
        Vector3 position;
        Vector3 collider_scale;

        //Constructors
        ObjectTransform(Vector3 pos,Vector3 scale);
        ObjectTransform(float x,float y,float z,float a,float b);
        ObjectTransform();
        ObjectTransform(ObjectTransform& t);


        //Sums the position with given vector
        void Translate(Vector3 vector);
        void Translate(float dx,float dy,float dz);

        //Sets the position
        void SetPosition(Vector3 position);
        void SetPosition(float x,float y,float z);


};



#endif
