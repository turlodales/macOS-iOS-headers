//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AVFunctionBarCaptureInputSourceItem, NSArray, NSMutableArray, NSSegmentedControl, NSStackView, NSString, NSView;

__attribute__((visibility("hidden")))
@interface AVFunctionBarCaptureInputSourceSelectionViewController : NSViewController
{
    NSMutableArray *_bindings;
    long long _controlsType;
    NSView *_controlsContainerView;
    NSSegmentedControl *_captureSourceSegmentedControl;
    NSStackView *_captureSourceButtonsView;
    NSStackView *_additionalAudioCaptureSourceButtonsView;
    id <AVFunctionBarRecordingControlsControllingInternal> _captureController;
    id <AVFunctionBarCaptureInputSourceSelectionViewControllerDelegate> _delegate;
}

+ (id)keyPathsForValuesAffectingShowsAdditionalAudioCaptureInputSourceItems;
+ (id)keyPathsForValuesAffectingShowsLabel;
+ (id)keyPathsForValuesAffectingSelectedCaptureInputSourceItem;
+ (id)keyPathsForValuesAffectingCaptureInputSourceItems;
+ (id)keyPathsForValuesAffectingShowsScrollViewWithButtons;
+ (id)keyPathsForValuesAffectingShowsSegmentedControl;
+ (id)keyPathsForValuesAffectingSelectionWithSegmentedControlPossible;
- (void).cxx_destruct;
@property long long controlsType; // @synthesize controlsType=_controlsType;
@property(nonatomic) __weak id <AVFunctionBarCaptureInputSourceSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) id <AVFunctionBarRecordingControlsControllingInternal> captureController; // @synthesize captureController=_captureController;
- (void)_unbindAllObjects;
- (void)_bindObject:(id)arg1 withBinding:(id)arg2 toObject:(id)arg3 withKeyPath:(id)arg4 options:(id)arg5;
- (void)_updateSourceSelectionControlStates;
- (void)_updateSourceSelectionControls;
- (void)_notifyDelegateSelectedCaptureInputSourceItemChangeTo:(id)arg1;
- (id)_makeSelectionButtonWithInputSourceItem:(id)arg1;
- (id)_makeLabel;
- (void)_loadCaptureSourceButtonsView;
- (void)_loadCaptureSourceSegmentedControl;
- (void)actionSegmentedControlSelectionChanged:(id)arg1;
- (void)actionSelectFunctionBarCaptureInputSourceItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
@property(readonly) BOOL showsAdditionalAudioCaptureInputSourceItems;
@property(readonly) NSString *labelStringValue;
@property(readonly) BOOL showsLabel;
@property(readonly) AVFunctionBarCaptureInputSourceItem *selectedCaptureInputSourceItem;
@property(readonly) NSArray *captureInputSourceItems;
@property(readonly) BOOL showsScrollViewWithButtons;
@property(readonly) BOOL showsSegmentedControl;
@property(readonly, getter=isSelectionWithSegmentedControlPossible) BOOL selectionWithSegmentedControlPossible;
- (void)dealloc;
- (id)init;

@end

