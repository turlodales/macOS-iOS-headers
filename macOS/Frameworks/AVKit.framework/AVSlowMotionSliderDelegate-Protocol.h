//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVSlowMotionSlider;

@protocol AVSlowMotionSliderDelegate <NSObject>

@optional
- (void)slowMotionSliderMouseDownEventTrackingEnded:(AVSlowMotionSlider *)arg1;
- (void)slowMotionSlider:(AVSlowMotionSlider *)arg1 tracksMouseDownEventWithCurrentValue:(double)arg2;
- (void)slowMotionSliderMouseDownEventTrackingBegan:(AVSlowMotionSlider *)arg1;
@end

