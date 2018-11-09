# Sinsy-NG
The Formant-Based All Language Singing Voice Syntheis System: Sinsy-NG

# How to use 

```bash
 usage:
    SinsyNG [ options ] [ infile ]
  options:                                           [def]
    -w langs    : languages                          [ en]
    -u Score    : score File (*.sinsy)               [N/A]
    -o file     : filename of output wav audio       [N/A]
  infile:
    MusicXML file
```

Example:
```bash
./sinsyNG -o o.wav c.xml
```

# How to make

Sinsy NG needs `sinsy sndfile samplerate`,Please install them before you build.

```bash
mkdir build
cd build
cmake ..
make
```