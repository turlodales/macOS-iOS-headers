//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVPlayerView.h>

@interface PAAVPlayerView : AVPlayerView
{
    BOOL _isTrimming;
}

- (void)updateBackgroundColor;
- (void)trimmingDidComplete;
- (void)beginTrimmingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isTrimming;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)scrollWheel:(id)arg1;

@end

