//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVKit/AVPlayerControlsViewController.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface AVInlinePlaybackControlsViewController : AVPlayerControlsViewController
{
    NSView *_initialFirstResponder;
    double _unmutedVolume;
    CDUnknownBlockType _nextKeyViewSetupBlock;
}

- (void).cxx_destruct;
- (void)volumeButtonPressed:(id)arg1;
- (id)initialFirstResponder;
- (struct CGSize)intrinsicControlsContentViewSize;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (id)controlsStyleIdentifier;
- (void)setupNextKeyView;
- (void)loadView;

@end

