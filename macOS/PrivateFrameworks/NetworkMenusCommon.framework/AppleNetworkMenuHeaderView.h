//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSNumber, NSTextField, NSTimer;

@interface AppleNetworkMenuHeaderView : NSView
{
    NSTextField *o_titleField;
    NSTextField *o_timeField;
    NSNumber *mConnectionStartTime;
    double mSleepStartTime;
    long long mSleepTimeAdditionalSeconds;
    NSTimer *mConnectedTimer;
    NSTimer *mClickFlashTimer;
    BOOL mHasClicked;
    BOOL mIsHighlighted;
    BOOL mShouldShowTimer;
}

- (void)viewWillMoveToWindow:(id)arg1;
- (void)startConnectedTimer;
- (void)stopConnectedTimer;
- (void)updateTime;
- (id)timeString;
- (void)setTime:(id)arg1;
- (long long)elapsedTime;
- (void)setWidth:(double)arg1;
- (double)desiredWidth;
- (void)setConnectionStartTime:(id)arg1;
- (void)setShouldShowTimer:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawHighlighted:(BOOL)arg1;
- (void)sizeToFit;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)awakeFromNib;

@end

