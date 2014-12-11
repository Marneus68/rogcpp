#include "Application.h"

namespace rogcpp {

    Application *Application::_singleton = nullptr;
    
    Application::Application() {
        window = new sf::RenderWindow(sf::VideoMode(890, 600), "Hello world!");        
    }
    
    Application::~Application() {
        delete(window); 
    }
    
    Application* Application::initialize(void) {
        if (_singleton == nullptr) {
            _singleton =  new Application();
        }
        return _singleton;
    }

    void Application::run(void) {
        while (window->isOpen()) {
            sf::Event event;
            while (window->pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                window->close();
                window->display();
            }
            window->clear();
        }
    }
    
    void Application::kill(void) {
        if (_singleton != nullptr) {
            delete _singleton;
            _singleton = nullptr;
        }
    }
} /* rogcpp */

