#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include <SFML/Graphics.hpp>

namespace rogcpp {
    class Application {
        protected:
            Application ();
            virtual ~Application ();
            
            static Application *_singleton;

            sf::RenderWindow * window;
        public:
            static Application *initialize(void);
            void run(void);
            static void kill(void);
    };
} /* cpprog */

#endif /* __APPLICATION_H__ */

