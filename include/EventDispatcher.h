#ifndef __EVENTDISPATCHER_H__
#define __EVENTDISPATCHER_H__

#include <SFML/Graphics.hpp>

namespace rogcpp {
    class EventDispatcher {
        protected:
            void broadcast(
    
        public:
            EventDispatcher ();
            EventDispatcher (const EventDispatcher&);
            virtual ~EventDispatcher ();
    
            EventDispatcher &operator=(const EventDispatcher&);

            void dispatch(sf::Event event);
    };
} /* rogcpp */

#endif /* __EVENTDISPATCHER_H__ */
