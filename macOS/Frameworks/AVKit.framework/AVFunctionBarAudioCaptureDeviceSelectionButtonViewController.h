//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSImage, NSMutableArray, NSString;
@protocol AVFunctionBarAudioCaptureDeviceSelectionButtonViewControllerDelegate, AVFunctionBarRecordingControlsControllingInternal;

__attribute__((visibility("hidden")))
@interface AVFunctionBarAudioCaptureDeviceSelectionButtonViewController : NSViewController
{
    NSMutableArray *_bindings;
    id <AVFunctionBarRecordingControlsControllingInternal> _captureController;
    id <AVFunctionBarAudioCaptureDeviceSelectionButtonViewControllerDelegate> _delegate;
}

+ (id)keyPathsForValuesAffectingHasChevron;
+ (id)keyPathsForValuesAffectingEnabled;
+ (id)keyPathsForValuesAffectingImage;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingShowsImage;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AVFunctionBarAudioCaptureDeviceSelectionButtonViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id <AVFunctionBarRecordingControlsControllingInternal> captureController; // @synthesize captureController=_captureController;
- (void)_unbindAllObjects;
- (void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5;
- (void)actionButton:(id)arg1;
- (void)loadView;
@property(readonly) BOOL hasChevron;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly) NSImage *image;
@property(readonly) NSString *title;
@property(readonly) double width;
@property(readonly) BOOL showsImage;
- (void)dealloc;
- (id)init;

@end

