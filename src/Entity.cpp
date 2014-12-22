#include "Entity.h"

namespace rogcpp {
    Entity::Entity() {
        firstname   = ""; 
        lastname    = ""; 
        nickname    = ""; 
    }

    Entity::Entity(const std::string & fname, const std::string & lname, const std::string & nname) : Entity() {
        firstname   = fname; 
        lastname    = lname; 
        nickname    = nname; 
    }

    Entity::Entity(const Entity & entity) : Entity() {
        firstname   = entity.firstname;
        lastname    = entity.lastname;
        nickname    = entity.nickname;
    }

    Entity::~Entity() {

    }

    Entity & Entity::operator=(const Entity & entity) {
        //return new Entity(entity);
        if (this != &entity) {
            firstname   = entity.firstname;
            lastname    = entity.lastname;
            nickname    = entity.nickname;
        }
        return * this;
    }

    bool Entity::talk(const std::string & querry, std::string & answer) {
        if (talkBehaviour != nullptr) {
            return talkBehaviour->talk(querry, answer);
        }
        return false;
    }
} /* rogcpp */
