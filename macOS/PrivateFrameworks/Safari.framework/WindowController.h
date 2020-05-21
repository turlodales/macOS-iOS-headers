//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "ExtendedWindowDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WindowController : NSWindowController <ExtendedWindowDelegate>
{
    NSString *_multiWindowFrameAutosaveName;
    BOOL _autosaveFrame;
}

- (void).cxx_destruct;
- (BOOL)frameAutosaveIsAllowed;
- (BOOL)frameAutosaveEnabled;
- (void)setFrameAutosaveEnabled:(BOOL)arg1;
- (void)_windowDidLoad;
- (void)setFrameToDefault;
- (struct CGRect)defaultFrame;
- (void)setFrameWithoutAutosaving:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL didRestoreFinalWindowFrame;
- (id)multiWindowFrameAutosaveName;
- (BOOL)setMultiWindowFrameAutosaveName:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)_saveFrameIfAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

