#include "../Character.hpp"
#include "raylib.h"
Character::Character(ObjectTransform t,const char* file):Actor(t){
    this->image_idle=LoadTexture(file);
}
Character::Character(Vector3 pos,Vector3 collider_size,const char* file):Actor(pos,collider_size){
    this->image_idle=LoadTexture(file);
}
Character::Character(Actor& actor){
    this->transform=actor.transform;
}
Character::Character(){
    ObjectTransform tr=ObjectTransform();
    this->transform=tr;

}
Character::~Character(){
}

void Character::DrawCharacter(){
    //this->DisplayInfos();
    DrawTexturePro(
        this->image_idle,
        (Rectangle){
            .x=0,
            .y=0,
            .width=(float)image_idle.width,
            .height=(float)image_idle.height
        },(Rectangle){
            .x=transform.position.x,
            .y=transform.position.y,
            .width=transform.collider_scale.x,
            .height=transform.collider_scale.y
        } ,
        (Vector2){
            0,0
        },
        0.0f,
        WHITE);
}
