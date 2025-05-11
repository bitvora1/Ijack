#ifndef CHARACTER_H
#define CHARACTER_H

#include"../Base/Actor.hpp"
#include "raylib.h"


class Character:public Actor{
    public:
    Texture2D image_idle;


    Character(ObjectTransform t,const char* file);
    Character(Vector3 pos,Vector3 collider_size,const char* file);
    Character(Actor& actor);
    Character();
    ~Character();

    void DrawCharacter();


};
#endif
