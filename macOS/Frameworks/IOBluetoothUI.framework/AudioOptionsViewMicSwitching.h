//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IOBluetoothUI/AudioOptionsViewController.h>

@class NSPopUpButton;

@interface AudioOptionsViewMicSwitching : AudioOptionsViewController
{
    NSPopUpButton *_microphoneButton;
}

+ (_Bool)deviceHasViews:(id)arg1;
@property NSPopUpButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
- (void)handleMenu:(id)arg1;
- (void)loadPrefs;
- (id)viewsToAlign;
- (void)viewDidLoad;
- (id)init;

@end

