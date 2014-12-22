#include "DefaultTalkBehaviour.h"

namespace rogcpp {
    bool DefaultTalkBehaviour::talk(const std::string & querry, std::string & answer) {
        std::string upperQuerry = querry;
        std::transform(upperQuerry.begin(), upperQuerry.end(), upperQuerry.begin(), ::toupper);
        auto it = map.find(upperQuerry);
        if (it != map.end()) {
            answer = it->second;
            std::cout << it->second << std::endl;
            if (upperQuerry.compare("BYE")==0)
                return false;
            return true;
        } else {
            if (upperQuerry.compare("BYE")==0)
                return false;
            if (!talk("NONE", answer)) {
                answer = "...";
                std::cout << "..." << std::endl;
                return true;
            }
            return true;
        }
    }
} /* rogcpp */
