#ifndef SINSY_NG_SINSYNG_H
#define SINSY_NG_SINSYNG_H

#include <iostream>

class SinsyNG {
public:
    class Informations {
    public:
        explicit Informations(int key);
    private:
        static void usage();
    };

private:
    const std::string DEFAULT_VOICE = "";
    const std::string DEFAULT_LANG = "";
};

#endif //SINSY_NG_SINSYNG_H
