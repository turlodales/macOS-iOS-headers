//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVThumbnail, AVTouchBarScrubberInternal;

@protocol AVTouchBarScrubberDelegateInternal <NSObject>

@optional
- (AVThumbnail *)touchBarScrubber:(AVTouchBarScrubberInternal *)arg1 thumbnailForTime:(double)arg2;
- (void)touchBarScrubberDidStopTracking:(AVTouchBarScrubberInternal *)arg1;
- (BOOL)touchBarScrubberWillStartTracking:(AVTouchBarScrubberInternal *)arg1;
@end

