/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
CircularBufferAudioProcessorEditor::CircularBufferAudioProcessorEditor (CircularBufferAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    setSize (200, 200);
    
    delayTimeSlider.setSliderStyle(Slider::SliderStyle::RotaryVerticalDrag);
    delayTimeSlider.setRange(0.0, 2000.0);
    delayTimeSlider.setValue(0.0);
    delayTimeSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 50, 15);
    addAndMakeVisible(delayTimeSlider);
    
    delayTimeVal = std::make_unique<AudioProcessorValueTreeState::SliderAttachment>(processor.parameters, "Delay Time", delayTimeSlider);
}

CircularBufferAudioProcessorEditor::~CircularBufferAudioProcessorEditor()
{
}

//==============================================================================
void CircularBufferAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll(Colours::tan);
}

void CircularBufferAudioProcessorEditor::resized()
{
    Rectangle <int> bounds = getLocalBounds();
    
    FlexBox flexbox { FlexBox::Direction::row, FlexBox::Wrap::noWrap, FlexBox::AlignContent::stretch, FlexBox::AlignItems::stretch, FlexBox::JustifyContent::center };
    
    Array<FlexItem> items;
    items.add(FlexItem(100, 100, delayTimeSlider));
    flexbox.items = items;
    
    flexbox.performLayout(bounds);
    
    
    
    
    
    
    
}
