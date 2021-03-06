//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class FI_TShrinkToFitScrollView, FI_TShrinkToFitTextView;

__attribute__((visibility("hidden")))
@interface FI_TShrinkToFitWindow : NSPanel
{
    struct TNSWeakPtr<FI_TShrinkToFitScrollView, void> _weakStfScrollView;
    struct TNSWeakPtr<FI_TShrinkToFitTextView, void> _weakStfTextView;
    struct TNotificationCenterObserver _stfScrollViewFrameChangedObserver;
    struct TNotificationCenterObserver _stfScrollViewPreferredScrollerStyleDidChangeObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)undo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGRect)calcGlobalFrame;
- (void)sizeToFit;
- (BOOL)accessibilityIsIgnored;
- (void)_resignKeyFocus;
- (BOOL)_canBecomeSecondaryKeyWindow;
- (BOOL)canBecomeKeyWindow;
@property(nonatomic) __weak FI_TShrinkToFitTextView *stfTextView; // @dynamic stfTextView;
@property(nonatomic) __weak FI_TShrinkToFitScrollView *stfScrollView; // @dynamic stfScrollView;
- (id)initWithSTFTextView:(id)arg1;
- (double)_focusRingThickness;

@end

