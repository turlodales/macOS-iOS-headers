//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

#import "NSWindowDelegate.h"

@class NSDate, NSString, NSTimer, SFAnimatedLockButton, ScreenSaverLockView;

@interface ScreenSaverLockWindow : NSWindow <NSWindowDelegate>
{
    ScreenSaverLockView *_lockView;
    NSTimer *_updateTimer;
    NSTimer *_fadeTimer;
    NSDate *_fadeStartTime;
    NSDate *_startTime;
    SFAnimatedLockButton *_lockButton;
}

+ (void)dismiss;
+ (void)showWithCountdownSeconds:(double)arg1;
- (void)_fadeWindow;
- (void)_updateWindow;
- (void)_showWithCountdownSeconds:(double)arg1;
- (void)_dismiss;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

