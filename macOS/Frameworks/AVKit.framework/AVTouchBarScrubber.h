//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "AVTouchBarMediaSelectionButtonViewControllerDelegate.h"
#import "AVTouchBarMediaSelectionViewControllerDelegate.h"
#import "CAAnimationDelegate.h"
#import "NSStackViewDelegate.h"

@class AVObservationController, AVPlayerControllerTimeResolver, AVTouchBarMediaSelectionButtonViewController, AVTouchBarMediaSelectionViewController, AVTouchBarScrubberController, NSButton, NSColor, NSLayoutConstraint, NSMutableArray, NSStackView, NSString;

@interface AVTouchBarScrubber : NSView <CAAnimationDelegate, AVTouchBarMediaSelectionButtonViewControllerDelegate, AVTouchBarMediaSelectionViewControllerDelegate, NSStackViewDelegate>
{
    NSMutableArray *_bindingsInfos;
    BOOL _bindingsActive;
    id <AVTouchBarPlaybackControlsControlling> _playbackControlsController;
    id <AVTouchBarMediaSelectionControlling><AVTouchBarPlaybackControlsControllingInternal><AVTouchBarScrubberControlling><AVTouchBarTrackControlling><AVTimeControlling> _playerController;
    BOOL _collapsesIntoPlayButton;
    BOOL _drawsBackground;
    BOOL _showsInlinePlayButton;
    BOOL _canShowMediaSelectionButton;
    BOOL _collapsed;
    long long _expandCollapseAnimationCount;
    long long _appearAnimationCount;
    long long _disappearAnimationCount;
    NSView *_containerView;
    NSStackView *_controlsContainerView;
    NSView *_collapsedRepresentation;
    NSButton *_pictureInPictureButton;
    NSButton *_inlinePlayButton;
    NSView *_inlinePlayButtonSeparatorView;
    NSView *_mediaSelectionButtonSeparatorView;
    NSView *_pictureInPictureButtonSeparatorView;
    NSLayoutConstraint *_inlinePlayButtonWidthConstraint;
    AVTouchBarScrubberController *_touchBarScrubberController;
    NSView *_scrubberContainerView;
    AVTouchBarMediaSelectionButtonViewController *_mediaSelectionButtonViewController;
    AVTouchBarMediaSelectionViewController *_mediaSelectionViewController;
    NSStackView *_liveStreamContainerView;
    NSButton *_liveStreamPictureInPictureButton;
    AVTouchBarMediaSelectionButtonViewController *_liveStreamMediaSelectionButtonViewController;
    NSLayoutConstraint *_containerViewFixedWidthLayoutConstraint;
    NSLayoutConstraint *_containerViewRightAnchorLayoutConstraint;
    NSLayoutConstraint *_scrubberLeftAnchorLayoutConstraint;
    AVObservationController *_keyValueObservationController;
    id <AVTouchBarScrubberDelegate> _delegate;
    struct {
        char touchBarScrubberExpandButtonTapped;
        char touchBarScrubber_presentMediaSelectionViewControllerInPopover;
        char touchBarScrubberDismissMediaSelectionPopover;
    } _delegateRespondsTo;
    BOOL _canCollapse;
    AVPlayerControllerTimeResolver *_timeResolver;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) AVPlayerControllerTimeResolver *timeResolver; // @synthesize timeResolver=_timeResolver;
@property(retain) id <AVTouchBarMediaSelectionControlling><AVTouchBarPlaybackControlsControllingInternal><AVTouchBarScrubberControlling><AVTouchBarTrackControlling><AVTimeControlling> playerController; // @synthesize playerController=_playerController;
@property BOOL canCollapse; // @synthesize canCollapse=_canCollapse;
@property BOOL canShowMediaSelectionButton; // @synthesize canShowMediaSelectionButton=_canShowMediaSelectionButton;
@property BOOL showsInlinePlayButton; // @synthesize showsInlinePlayButton=_showsInlinePlayButton;
- (void)_deactivateBindings;
- (void)_activateBindings;
- (void)_unbindAllObjects;
- (void)_unbindObject:(id)arg1;
- (void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5 setToNilWhenUnbinding:(BOOL)arg6;
- (void)_animateExpandCollapseTransition:(BOOL)arg1 oldBounds:(struct CGRect)arg2 newBounds:(struct CGRect)arg3 animationDuration:(double)arg4;
- (void)_animateAppearDisappearTransition:(BOOL)arg1 animationDuration:(double)arg2;
- (struct CATransform3D)_makeScaleTransform:(double)arg1 origin:(struct CGPoint)arg2;
- (id)_makeSeparatorView;
- (id)_makeExpandButton;
- (id)_makePictureInPictureButton;
- (id)_makeMediaSelectionViewController;
- (id)_makeMediaSelectionButtonViewController;
- (id)_makeSkipAheadButton;
- (id)_makePlayButton;
- (id)_makeBack30SecondsButton;
- (void)_updateTimeResolver;
- (void)_updateScrubberLeftAnchorLayoutConstraint;
- (void)_updateScrubberHasRoundedCornersWithDetachedViews:(id)arg1;
- (void)_updateScrubberHasRoundedCorners;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)stackView:(id)arg1 didReattachViews:(id)arg2;
- (void)stackView:(id)arg1 willDetachViews:(id)arg2;
- (void)touchBarMediaSelectionViewController:(id)arg1 didSelectLegibleTouchBarMediaSelectionOption:(id)arg2;
- (void)touchBarMediaSelectionViewController:(id)arg1 didSelectAudioTouchBarMediaSelectionOption:(id)arg2;
- (void)touchBarMediaSelectionButtonViewControllerPresentMediaSelectionPopover:(id)arg1;
- (void)actionPictureInPictureButtonTapped:(id)arg1;
- (void)actionExpandButtonTapped:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (void)setFrame:(struct CGRect)arg1;
@property(retain) NSColor *audioWaveformColor;
@property BOOL collapsesIntoPlayButton;
@property BOOL drawsBackground;
@property __weak id <AVTouchBarScrubberDelegate> delegate;
@property(retain) id <AVTouchBarPlaybackControlsControlling> playbackControlsController;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

