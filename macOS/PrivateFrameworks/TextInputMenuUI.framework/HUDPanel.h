//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPanel.h>

#import <TextInputMenuUI/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface HUDPanel : NSPanel <CAAnimationDelegate>
{
    BOOL fIsEventCaptureOurs;
}

@property BOOL isEventCaptureOurs; // @synthesize isEventCaptureOurs=fIsEventCaptureOurs;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)orderFront:(id)arg1;
- (void)orderOut:(id)arg1;
- (void)changeInputToSelection;
- (void)changeSelection;
- (void)flagsChanged:(id)arg1;
- (void)showInputsPanel:(unsigned long long)arg1;
- (void)resignKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)windowDidResize:(id)arg1;
- (void)_updateBackground;
- (id)_backgroundColorPatternImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

