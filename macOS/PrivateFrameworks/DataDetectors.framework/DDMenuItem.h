//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenuItem.h"

@class NSPopoverAnimationController;

__attribute__((visibility("hidden")))
@interface DDMenuItem : NSMenuItem
{
    NSPopoverAnimationController *_popoverAnimationController;
    struct CGRect _popoverPositioningRect;
    unsigned long long _expectedPopoverAnchorEdge;
    struct CGSize _expectedPopoverSize;
}

- (void).cxx_destruct;
@property struct CGSize expectedPopoverSize; // @synthesize expectedPopoverSize=_expectedPopoverSize;
@property unsigned long long expectedPopoverAnchorEdge; // @synthesize expectedPopoverAnchorEdge=_expectedPopoverAnchorEdge;
@property struct CGRect popoverPositioningRect; // @synthesize popoverPositioningRect=_popoverPositioningRect;
- (void)recognizerDidDismissAnimation:(id)arg1;
- (void)recognizerDidCompleteAnimation:(id)arg1;
- (void)recognizerDidCancelAnimation:(id)arg1;
- (void)recognizerDidUpdateAnimation:(id)arg1;
- (void)recognizerWillBeginAnimation:(id)arg1;
- (id)dd_context;
- (id)dd_action;

@end

