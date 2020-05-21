//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSImmediateActionAnimationController.h"

@class NSPopover, NSString, NSView;

@interface NSPopoverAnimationController : NSObject <NSImmediateActionAnimationController>
{
    NSPopover *_popover;
    unsigned long long _preferredEdge;
    NSView *_anchorView;
    struct CGRect _positioningRect;
    id _reserved2;
    unsigned int _reservedPopoverFlags:32;
}

+ (id)popoverAnimationControllerWithPopover:(id)arg1;
- (void).cxx_destruct;
@property __weak NSView *anchorView; // @synthesize anchorView=_anchorView;
@property(readonly) NSPopover *popover; // @synthesize popover=_popover;
@property struct CGRect positioningRect; // @synthesize positioningRect=_positioningRect;
@property unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
- (void)dealloc;
- (void)recognizerDidCancelAnimation:(id)arg1;
- (void)recognizerDidDismissAnimation:(id)arg1;
- (void)recognizerDidCompleteAnimation:(id)arg1;
- (void)recognizerDidUpdateAnimation:(id)arg1;
- (void)recognizerWillBeginAnimation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

