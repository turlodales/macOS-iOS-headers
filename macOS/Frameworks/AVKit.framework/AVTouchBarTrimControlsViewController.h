//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AVTrackViewController, AVTrimControlsViewController, AVTrimView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVTouchBarTrimControlsViewController : NSViewController
{
    NSMutableArray *_bindings;
    AVTrimControlsViewController *_weakParentTrimViewController;
    AVTrimView *_trimView;
    AVTrackViewController *_trackViewController;
    AVTrimControlsViewController *_strongParentTrimViewControllerForBinding;
}

- (void).cxx_destruct;
@property(retain) AVTrimControlsViewController *strongParentTrimViewControllerForBinding; // @synthesize strongParentTrimViewControllerForBinding=_strongParentTrimViewControllerForBinding;
@property(retain) AVTrackViewController *trackViewController; // @synthesize trackViewController=_trackViewController;
@property(retain) AVTrimView *trimView; // @synthesize trimView=_trimView;
- (void)_unbindAllObjects;
- (void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5;
- (void)_tearDownBindingsIfNeeded;
- (void)_setUpBindingsIfNeeded;
- (id)_makeTrackViewController;
- (id)_makeTouchBarTrimView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)loadView;
@property __weak AVTrimControlsViewController *parentTrimViewController;
- (void)dealloc;
- (id)init;

@end

