#include "Application.h"

#include <string>
#include <iostream>

#include "Entity.h"

int main(int argc, const char *argv[])
{
    rogcpp::StringMap tmpmap = {
            {"HELLO", "Hello. You can discuss byt typing the [WORDS] between [BRACKETS]."},
            {"NONE", "I know nothing about that."},
            {"BYE", "Bye!"},
            {"WORDS", "Yeah, you know, [WORDS]."},
            {"BRACKETS", "Yeah, [BRACKETS]."}
        };

    rogcpp::Entity e("Hello");
    e.talkBehaviour = new rogcpp::DefaultTalkBehaviour(e, tmpmap);
    std::string str;

    e.talk("HELLO", str);
    std::string input;
    while (std::cin >> input && e.talk(input, str)) {}

    /*
    rogcpp::Application * app = rogcpp::Application::initialize();
    app->run();
    app->kill();
    */
    return 0;
}
