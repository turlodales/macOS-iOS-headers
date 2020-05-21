//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, SiriUIKeyline;

__attribute__((visibility("hidden")))
@interface SVSSirilandView : NSView
{
    NSView *_contentView;
    NSView *_conversationView;
    NSView *_errorView;
    SiriUIKeyline *_keyline;
    CALayer *_contentMaskingLayer;
    BOOL _showingDeviceLockView;
    BOOL _masksContent;
    BOOL _pageTransitionKeylineVisible;
    struct UIOffset _topChevronOffset;
}

+ (id)sirilandView;
- (void).cxx_destruct;
@property(nonatomic, getter=isPageTransitionKeylineVisible) BOOL pageTransitionKeylineVisible; // @synthesize pageTransitionKeylineVisible=_pageTransitionKeylineVisible;
@property(nonatomic) BOOL masksContent; // @synthesize masksContent=_masksContent;
@property(readonly, nonatomic, getter=isShowingDeviceLockView) BOOL showingDeviceLockView; // @synthesize showingDeviceLockView=_showingDeviceLockView;
@property(retain, nonatomic) NSView *conversationView; // @synthesize conversationView=_conversationView;
@property(nonatomic) struct UIOffset topChevronOffset; // @synthesize topChevronOffset=_topChevronOffset;
- (BOOL)isFlipped;
@property(retain, nonatomic) NSView *errorView;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

