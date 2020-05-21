//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSButton, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVTouchBarRecordingControlsViewController : NSViewController
{
    id <AVTouchBarRecordingControlsControllingInternal> _captureController;
    BOOL _optionKeyPressed;
    NSButton *_recordButton;
    NSMutableArray *_bindings;
}

+ (id)keyPathsForValuesAffectingRedDotViewHidden;
- (void).cxx_destruct;
- (void)_unbindAllObjects;
- (void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5;
- (void)_syncRecordButtonWithCaptureStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
@property(readonly, getter=isRedDotViewHidden) BOOL redDotViewHidden;
@property(retain) NSButton *recordButton;
@property(getter=isOptionKeyPressed) BOOL optionKeyPressed;
@property(retain) id <AVTouchBarRecordingControlsControllingInternal> captureController;
- (void)dealloc;
- (id)init;

@end

