#ifndef __DEFAULTTALKBEHAVIOUR_H__
#define __DEFAULTTALKBEHAVIOUR_H__

#include <iostream>
#include <algorithm>

#include "TalkBehaviour.h"

namespace rogcpp {
    class DefaultTalkBehaviour : public TalkBehaviour {
        public:
            using TalkBehaviour::TalkBehaviour;

            virtual bool talk(const std::string & querry, std::string & answer);
    };
} /* rogcpp */

#endif /* __DEFAULTTALKBEHAVIOUR_H__ */
