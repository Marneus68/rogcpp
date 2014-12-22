#ifndef __ENTITY_H__
#define __ENTITY_H__

#include <string>

#include "TalkBehaviour.h"
#include "DefaultTalkBehaviour.h"

namespace rogcpp {
    class Entity {
        protected:
            std::string     firstname,
                            lastname,
                            nickname;

        public:
            Entity ();
            Entity (const std::string & fname, const std::string & lname = "", const std::string & nname = "");
            Entity (const Entity & entity);
            virtual ~Entity ();
    
            Entity & operator=(const Entity & entity);
            
            TalkBehaviour   * talkBehaviour = nullptr;

            bool talk(const std::string & querry, std::string & answer);
    };
} /* rogcpp */

#endif /* __ENTITY_H__ */
