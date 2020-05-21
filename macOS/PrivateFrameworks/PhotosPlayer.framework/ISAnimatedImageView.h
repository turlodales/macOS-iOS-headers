//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ISAnimatedImagePlayerDestination.h"

@class ISAnimatedImage, ISAnimatedImagePlayer, NSString;

@interface ISAnimatedImageView : NSView <ISAnimatedImagePlayerDestination>
{
    ISAnimatedImagePlayer *_player;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ISAnimatedImagePlayer *player; // @synthesize player=_player;
@property(nonatomic) unsigned long long displayedFrameIndex;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(retain, nonatomic) ISAnimatedImage *image;
- (BOOL)isReadyToDisplay;
- (void)frameDidChange;
- (void)setHidden:(BOOL)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)dealloc;
- (void)_isAnimatedImageNSView_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAnimatedImagePlayer:(id)arg1;
- (id)initWithAnimatedImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

