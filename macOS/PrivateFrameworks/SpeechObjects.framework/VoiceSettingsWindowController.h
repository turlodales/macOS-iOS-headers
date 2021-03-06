//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <SpeechObjects/NSSpeechSynthesizerDelegate-Protocol.h>

@class NSButton, NSImageView, NSSlider, NSSpeechSynthesizer, NSString, SOVoicePopUpButton;

@interface VoiceSettingsWindowController : NSWindowController <NSSpeechSynthesizerDelegate>
{
    NSButton *_useCustomRateCheckbox;
    NSButton *_useCustomVolumeCheckbox;
    NSButton *_startStopSpeakingButton;
    NSSlider *_rateSlider;
    NSSlider *_volumeSlider;
    NSImageView *_volumeQuietIcon;
    NSImageView *_volumeLoudIcon;
    SOVoicePopUpButton *_voicePopupMenu;
    NSSpeechSynthesizer *_speechSynthesizer;
    id _modalDelegate;
    NSString *_playDisplayString;
}

- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
- (float)percentOfNormalFromSlider:(id)arg1;
- (float)wordsPerMinuteFromSlider:(id)arg1;
- (void)setValueOfSlider:(id)arg1 usingPercentOfNormal:(float)arg2;
- (void)setValueOfSlider:(id)arg1 usingWordsPerMinute:(float)arg2;
- (void)volumeCheckboxClicked:(id)arg1;
- (void)rateCheckboxClicked:(id)arg1;
- (void)volumeSliderChanged:(id)arg1;
- (void)rateSliderChanged:(id)arg1;
- (void)voicePopupMenuChanged:(id)arg1;
- (void)playStopVoiceSettings:(id)arg1;
- (void)cancelVoiceSettings:(id)arg1;
- (void)saveVoiceSettings:(id)arg1;
- (id)voiceSettingsFromWindow;
- (void)setUpWindowWithVoiceSettings:(id)arg1 modalDelegate:(id)arg2;
- (void)closeWindow;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

