/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
/**
*/
class DelayAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    DelayAudioProcessorEditor (DelayAudioProcessor&);  // You can rename NewProjectAudioProcessor as needed too.
    ~DelayAudioProcessorEditor() override;
    // ...

    void paint (juce::Graphics&) override;
    void resized() override;
private:
    DelayAudioProcessor& audioProcessor;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DelayAudioProcessorEditor)
};




//==============================================================================
