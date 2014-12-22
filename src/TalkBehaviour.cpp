#include "TalkBehaviour.h"

namespace rogcpp {
    TalkBehaviour::TalkBehaviour () {

    }

    TalkBehaviour::TalkBehaviour (const Entity & _entity) : TalkBehaviour::TalkBehaviour() {
        entity = _entity;
    }


    TalkBehaviour::TalkBehaviour (const std::string & fileName, const Entity & _entity = null_entity) : TalkBehaviour::TalkBehaviour(_entity) {
        
    }

    TalkBehaviour::TalkBehaviour (const StringMap & stringMap, const Entity & _entity = null_entity) : TalkBehaviour::TalkBehaviour(_entity) {
        if (map != stringMap) {
            map = stringMap;
        }
    }

    TalkBehaviour::TalkBehaviour (const TalkBehaviour & talkBehaviour, const Entity & _entity = null_entity) : TalkBehaviour::TalkBehaviour(_entity) {
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
