cmake_minimum_required(VERSION 3.15)
project(Delay_Clion VERSION 1.0.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# JUCE Path
set(JUCE_DIR /Users/ivanilyich/JUCE)
# Add JUCE
add_subdirectory(${JUCE_DIR} JUCE)

# Define the plugin target
juce_add_plugin(Delay_Clion
        PLUGIN_NAME "Delay"
        COMPANY_NAME "YourCompany"
        IS_SYNTH FALSE
        NEEDS_MIDI_INPUT FALSE
        NEEDS_MIDI_OUTPUT FALSE
        IS_MIDI_EFFECT FALSE
        EDITOR_WANTS_KEYBOARD_FOCUS FALSE
        COPY_PLUGIN_AFTER_BUILD TRUE
        PLUGIN_MANUFACTURER_CODE Juce
        PLUGIN_CODE Juce
        FORMATS AU VST3
        PRODUCT_NAME "Delay"
)

# Add source files (modify based on your actual project structure)
target_sources(Delay_Clion PRIVATE
        Source/PluginProcessor.cpp
        Source/PluginEditor.cpp
)

# Link JUCE to the project
target_link_libraries(Delay_Clion PRIVATE juce::juce_audio_utils juce::juce_audio_plugin_client)

target_include_directories(Delay_Clion PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})