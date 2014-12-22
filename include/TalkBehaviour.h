#ifndef __TALKBEHAVIOUR_H__
#define __TALKBEHAVIOUR_H__

#include <string>
#include <map>

#include "Entity.h"

namespace rogcpp {
    class Entity;

    typedef std::map<std::string, std::string> StringMap;

    class TalkBehaviour {
        protected:
            StringMap   map;
            Entity      * entity = nullptr;

        public:
            TalkBehaviour ();
            TalkBehaviour (Entity & _entity);
            TalkBehaviour (const std::string & fileName,        Entity & _entity);
            TalkBehaviour (const StringMap & stringMap,         Entity & _entity);
            TalkBehaviour (const TalkBehaviour & talkBehaviour,Entity & _entity);
            virtual ~TalkBehaviour ();
    
            TalkBehaviour & operator=(const TalkBehaviour & talkBehaviour);

            virtual bool talk(const std::string & querry, std::string & answer) = 0;
    };
} /* rogcpp */

#endif /* __TALKBEHAVIOUR_H__ */
