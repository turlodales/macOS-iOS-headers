//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSTouchBarEscapeKeyView, NSTouchBarItem;

__attribute__((visibility("hidden")))
@interface NSTouchBarEscapeKeyViewController : NSViewController
{
    NSTouchBarItem *_touchBarItem;
}

+ (id)keyPathsForValuesAffectingPreferredSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)refreshSubviews;
- (void)dealloc;
- (void)_noteTouchBarItemViewChanged;
@property(retain) NSTouchBarItem *touchBarItem;
@property(readonly) struct CGSize preferredSize;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)_viewControllerSupports10_10Features;

// Remaining properties
@property(retain) NSTouchBarEscapeKeyView *view; // @dynamic view;

@end

