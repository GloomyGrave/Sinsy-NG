cmake_minimum_required(VERSION 3.10)
project(Sinsy-NG)

set(CMAKE_CXX_STANDARD 14)
# Sinsy library
# TODO: Change to file search
add_library(Sinsy SHARED
        lib/converter/ConfGroup.cpp
        lib/converter/ConfManager.cpp
        lib/converter/Converter.cpp
        lib/converter/PhonemeInfo.cpp
        lib/converter/UnknownConf.cpp
        lib/converter/util_converter.cpp
        lib/hts_engine_API/SynthConditionImpl.cpp
        lib/japanese/JConf.cpp
        lib/label/LabelData.cpp
        lib/label/LabelMaker.cpp
        lib/label/LabelMeasure.cpp
        lib/label/LabelPosition.cpp
        lib/label/LabelStream.cpp
        lib/label/LabelStrings.cpp
        lib/label/NoteGroup.cpp
        lib/label/NoteLabeler.cpp
        lib/label/PhonemeLabeler.cpp
        lib/label/SyllableLabeler.cpp
        lib/score/Beat.cpp
        lib/score/Dynamics.cpp
        lib/score/Key.cpp
        lib/score/Mode.cpp
        lib/score/Note.cpp
        lib/score/Pitch.cpp
        lib/score/ScorePosition.cpp
        lib/score/Slur.cpp
        lib/score/Syllabic.cpp
        lib/score/util_score.cpp
        lib/temporary/ScoreDoctor.cpp
        lib/temporary/TempScore.cpp
        lib/util/Configurations.cpp
        lib/util/DiphthongConverter.cpp
        lib/util/IStringable.cpp
        lib/util/InputFile.cpp
        lib/util/MacronTable.cpp
        lib/util/MultibyteCharRange.cpp
        lib/util/OutputFile.cpp
        lib/util/PhonemeTable.cpp
        lib/util/StringTokenizer.cpp
        lib/util/util_string.cpp
        lib/xml/XmlData.cpp
        lib/xml/XmlParser.cpp
        lib/xml/XmlReader.cpp
        lib/xml/XmlWriter.cpp
        lib/shm_ringbuffer/ringbuffer.cpp
        lib/Sinsy.cpp
        )

# Include Path Define
include_directories(lib/
        lib/util
        lib/score
        lib/japanese
        lib/converter
        lib/temporary
        lib/xml
        lib/shm_ringbuffer
        )

aux_source_directory(src SinsyNG_Src)
add_executable(SinsyNG ${SinsyNG_Src})
# target_link_libraries(SinsyNG Sinsy espeak-ng sndfile samplerate)