#include <iostream>
#include "SinsyNG.h"

SinsyNG::Informations::Informations(int key) {
    if (key == 0) {
        usage();
    } else if (key == 1) {

    } else {
        usage();
    }
}

void SinsyNG::Informations::usage() {
    std::cout << "The Formant-Based Singing Voice Syntheis System \"SinsyNG\"\n"
              << "Version 0.0.2A (http://Github.GloomyGhost.com/Sinsy-NG/)\n"
              << "CopyRight (C) GloomyGhost 2018-2019\n"
              << "\tUSAGE:\n"
              << "\t\tSinsyNG [ options ] [ infile ]\n"
              << "\toptions:                                             [def]\n"
              << "\t\t-w langs      : languages                          [N/A]\n"
              << "\t\t-s Score      : Score File (*.sinsy)               [N/A]\n"
              << "\t\t-o file       : filename of output wav audio       [N/A]\n"
              << "\t\t-m voice lang : languages of voice                 [N/A]\n"
              << "\tinfile:\n"
              << "\t\tMusicXML file" << std::endl;
}