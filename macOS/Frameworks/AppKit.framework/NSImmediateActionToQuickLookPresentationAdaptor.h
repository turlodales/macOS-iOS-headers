//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSForceClickMonitor, NSView;

__attribute__((visibility("hidden")))
@interface NSImmediateActionToQuickLookPresentationAdaptor : NSObject
{
    long long _presentationState;
    NSForceClickMonitor *_forceClickMonitor;
    NSView *_view;
    id <NSImmediateActionGestureRecognizerDelegate> _delegate;
    id <NSImmediateActionAnimationController> _animationController;
    NSEvent *_startEvent;
    long long _flags;
}

+ (BOOL)isForceClickPossibleFromEvent:(id)arg1;
- (void).cxx_destruct;
@property __weak NSView *view; // @synthesize view=_view;
@property __weak id <NSImmediateActionGestureRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property long long presentationState; // @synthesize presentationState=_presentationState;
- (void)_forceClickMonitorDidChange:(id)arg1;
- (id)_startEvent;
- (id)_forceClickMonitor;
@property(retain) id <NSImmediateActionAnimationController> animationController;
@property(readonly) unsigned long long modifierFlags;
- (struct CGPoint)locationInView:(id)arg1;
@property(readonly) double animationProgress;
- (void)_presentWithQuickLookEvent:(id)arg1;
- (void)presentQuickLookInView:(id)arg1;
- (void)cancel;
- (void)_reset;
- (void)_halfReset;
- (long long)state;
- (void)dealloc;
- (id)_delegate;

@end

