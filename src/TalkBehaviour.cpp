#include "TalkBehaviour.h"

namespace rogcpp {
    TalkBehaviour::TalkBehaviour () {

    }

    TalkBehaviour::TalkBehaviour (Entity & _entity) : TalkBehaviour::TalkBehaviour() {
        entity = &_entity;
    }


    TalkBehaviour::TalkBehaviour (const std::string & fileName, Entity & _entity) : TalkBehaviour::TalkBehaviour(_entity) {
        
    }

    TalkBehaviour::TalkBehaviour (const StringMap & stringMap, Entity & _entity) : TalkBehaviour::TalkBehaviour(_entity) {
        if (map != stringMap) {
            map = stringMap;
        }
    }

    TalkBehaviour::TalkBehaviour (const TalkBehaviour & talkBehaviour, Entity & _entity) : TalkBehaviour::TalkBehaviour(_entity) {
        if (talkBehaviour.map != map) {
            map = talkBehaviour.map;
        }
    }

    TalkBehaviour::~TalkBehaviour() {}

    TalkBehaviour & TalkBehaviour::operator=(const TalkBehaviour & talkBehaviour) {
        if (talkBehaviour.map != map) {
            map = talkBehaviour.map;
        }
        return * this;
    }
} /* rogcpp */
