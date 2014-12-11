#include "Application.h"

int main(int argc, const char *argv[])
{
    rogcpp::Application * app = rogcpp::Application::initialize();
    app->run();
    app->kill();
    return 0;
}
