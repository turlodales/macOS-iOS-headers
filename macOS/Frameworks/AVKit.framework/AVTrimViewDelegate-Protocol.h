//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVTrimView;

@protocol AVTrimViewDelegate <NSObject>

@optional
- (BOOL)trimViewCanStartTracking:(AVTrimView *)arg1;
- (void)trimView:(AVTrimView *)arg1 didZoomBy:(double)arg2;
- (void)trimViewHideTimeIndicatorPopover:(AVTrimView *)arg1;
- (void)trimView:(AVTrimView *)arg1 didChangeTimeIndicatorPopoverValue:(double)arg2;
- (void)trimView:(AVTrimView *)arg1 showTimeIndicatorPopoverWithValue:(double)arg2;
- (void)trimView:(AVTrimView *)arg1 didStopTracking:(unsigned long long)arg2;
- (void)trimView:(AVTrimView *)arg1 willStartTracking:(unsigned long long)arg2;
@end

