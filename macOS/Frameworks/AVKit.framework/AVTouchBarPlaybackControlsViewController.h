//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AVPlayerControllerTimeResolver, AVPlayerView, AVTouchBarScrubberController, NSMutableArray, NSView;

__attribute__((visibility("hidden")))
@interface AVTouchBarPlaybackControlsViewController : NSViewController
{
    AVPlayerControllerTimeResolver *_intervalTimeResolver;
    AVTouchBarScrubberController *_touchBarScrubberController;
    NSView *_timeLineView;
    NSView *_liveStreamingView;
    NSView *_seekableLiveStreamingView;
    id _touchBarDidExitCustomizationObserver;
    NSMutableArray *_bindings;
    BOOL _showsPlayButton;
    id <AVTouchBarPlaybackControlsControllingInternal><AVTouchBarTrackControlling><AVTimeControlling> _playerController;
    AVPlayerView *_playerView;
}

- (void).cxx_destruct;
@property BOOL showsPlayButton; // @synthesize showsPlayButton=_showsPlayButton;
@property(retain, nonatomic) AVPlayerControllerTimeResolver *intervalTimeResolver; // @synthesize intervalTimeResolver=_intervalTimeResolver;
@property(retain) AVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain) id <AVTouchBarPlaybackControlsControllingInternal><AVTouchBarTrackControlling><AVTimeControlling> playerController; // @synthesize playerController=_playerController;
- (void)unbindAllObjects;
- (void)bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5;
- (void)updateShowsPlayButton;
- (id)makePlayButton;
- (id)_makeSeekableLiveStreamingView;
- (id)_makeLiveStreamingView;
- (id)liveStreamingView;
- (id)timeLineView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)loadView;
- (void)reloadThumbailsOrAudioWaveform;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

