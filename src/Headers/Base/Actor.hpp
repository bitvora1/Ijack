#ifndef ACTOR_H
#define ACTOR_H

#include "ObjectTransform.hpp"
#include <raylib.h>

class Actor{
    public:

        ObjectTransform transform;



        //Constructors
        Actor(ObjectTransform t);
        Actor(Vector3 pos,Vector3 collider_size);
        Actor(Actor& actor);
        Actor();

        //Draw Collider
        void DrawCollider(Color c);

        //Move the actor
        void Move(Vector3 direction_vector,float deltaTime);



    private:



};
#endif
