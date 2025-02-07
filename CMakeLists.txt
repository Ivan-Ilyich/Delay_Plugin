cmake_minimum_required(VERSION 3.15)
project(DelayPlugin VERSION 1.0.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# JUCE Path (Change this to your JUCE folder)
set(JUCE_DIR /Users/ivanilyich/JUCE)  # Adjust to your actual JUCE path

# Add JUCE
add_subdirectory(${JUCE_DIR} JUCE)

# Define the plugin target
juce_add_plugin(Delay
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
    FORMATS AU VST3 Standalone  # Add/remove formats as needed
    PRODUCT_NAME "Delay"
)

# Add source files (modify based on your actual project structure)
target_sources(Delay PRIVATE
    Source/PluginProcessor.cpp
    Source/PluginEditor.cpp
)

# Link JUCE to the project
target_link_libraries(Delay PRIVATE juce::juce_audio_utils juce::juce_audio_plugin_client)

