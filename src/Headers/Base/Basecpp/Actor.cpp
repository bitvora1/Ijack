#include"../Actor.hpp"



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

    DrawRectangleLines(
        this->transform.position.x,
        this->transform.position.y,
        this->transform.collider_scale.x,
        this->transform.collider_scale.y,
        c);
}

bool Actor::CheckCollision(Actor& other , bool edit_mode) const{

    Rectangle rect1=(Rectangle){
        .x=this->transform.position.x,
        .y=this->transform.position.y,
        .width=this->transform.collider_scale.x,
        .height=this->transform.collider_scale.y
    };
    Rectangle rect2=(Rectangle){
        .x=other.transform.position.x,
        .y=other.transform.position.y,
        .width=other.transform.collider_scale.x,
        .height=other.transform.collider_scale.y
    };
    if(edit_mode){
        DrawRectangleLines(rect1.x,rect1.y,rect1.width,rect1.height,BLUE);
        DrawRectangleLines(rect2.x,rect2.y,rect2.width,rect2.height,BLUE);
    }
    return CheckCollisionRecs(rect1,rect2);
}



void Actor::Move(Vector3 direction_vector,float deltaTime){
    Vector3 scaled_vector=(Vector3){
        .x=direction_vector.x*deltaTime,
        .y=direction_vector.y*deltaTime,
        .z=direction_vector.z*deltaTime,
    };
    this->transform.Translate(scaled_vector);
}
void Actor::DisplayInfos(){
    std::cout<<std::endl<<"------------------------------------------";
    std::cout<<std::endl<<this->transform.position.x<<" : "<<this->transform.position.y;
    std::cout<<std::endl<<this->transform.collider_scale.x<<" : "<<this->transform.collider_scale.y;
    std::cout<<std::endl<<"------------------------------------------";
}
