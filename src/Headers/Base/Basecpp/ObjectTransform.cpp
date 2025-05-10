#include"../ObjectTransform.hpp"
#include <raylib.h>


//Constructors
ObjectTransform::ObjectTransform(Vector3 pos,Vector3 scale){
    this->position=pos;
    this->collider_scale=scale;
}
ObjectTransform::ObjectTransform(float x,float y,float z,float a,float b){
    this->position={
        x,
        y,
        z
    };
    this->collider_scale={
        a,
        b
    };
}
ObjectTransform::ObjectTransform(){
    this->position={0.0f,0.0f,0.0f};
    this->collider_scale={1.0f,1.0f};
}
ObjectTransform::ObjectTransform(ObjectTransform& t){
    this->position=t.position;
    this->collider_scale=t.collider_scale;
}
//Sums the position with given vector
void ObjectTransform::Translate(Vector3 vector){
    this->position.x+=vector.x;
    this->position.y+=vector.y;
    this->position.z+=vector.z;
}
void ObjectTransform::Translate(float dx,float dy,float dz){
    this->position.x+=dx;
    this->position.y+=dy;
    this->position.z+=dz;
}


//Sets the position
void ObjectTransform::SetPosition(Vector3 position){
    this->position=position;
}
void ObjectTransform::SetPosition(float x,float y,float z){
    this->position=(Vector3){
        .x=x,
        .y=y,
        .z=z
    };
}
