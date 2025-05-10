#include"../Actor.hpp"
#include <raylib.h>


//Constructors
Actor::Actor(ObjectTransform t){
    this->transform=t;
}
Actor::Actor(Actor& actor){
    this->transform=actor.transform;
}
Actor::Actor(){
    this->transform=ObjectTransform();
}
Actor::Actor(Vector3 pos,Vector3 collider_size){
    this->transform.position=pos;
    this->transform.collider_scale=collider_size;
}

//Draw Collider
void Actor::DrawCollider(Color c){

    DrawRectangle(
        this->transform.position.x,
        this->transform.position.y,
        this->transform.collider_scale.x,
        this->transform.collider_scale.y,
        c);
}
void Actor::Move(Vector3 direction_vector,float deltaTime){
    Vector3 scaled_vector=(Vector3){
        .x=direction_vector.x*deltaTime,
        .y=direction_vector.y*deltaTime,
        .z=direction_vector.z*deltaTime,
    };
    this->transform.Translate(scaled_vector);
}
