/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class CircularBufferAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    CircularBufferAudioProcessorEditor (CircularBufferAudioProcessor&);
    ~CircularBufferAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    Slider delayTimeSlider;
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    CircularBufferAudioProcessor& processor;

public:
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> delayTimeVal;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CircularBufferAudioProcessorEditor)
};
