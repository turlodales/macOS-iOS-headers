//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXCollectionReusableView.h"

#import "NSTextViewDelegate.h"
#import "PXChangeObserver.h"

@class NSProgressIndicator, NSString, NSTextField, NSTextView, PXFooterAnimatedIconView, PXFooterViewModel;

@interface PXPhotosGlobalFooterView : UXCollectionReusableView <PXChangeObserver, NSTextViewDelegate>
{
    BOOL _hasAnimatedIconView;
    PXFooterAnimatedIconView *_animatedIconView;
    NSTextField *_titleLabel;
    NSTextField *_extendedTitleLabel;
    NSTextView *_subtitle1TextView;
    NSTextView *_subtitle2TextView;
    NSProgressIndicator *_progressView;
    BOOL _isPresentingAlert;
    struct {
        char photosGlobalFooterViewDidChangeHeight;
    } _delegateRespondsTo;
    BOOL _isPerformingChanges;
    double _currentHeight;
    PXFooterViewModel *_viewModel;
    id <PXPhotosGlobalFooterViewDelegate> _delegate;
    id <PXPhotosGlobalFooterViewLayoutDelegate> _layoutDelegate;
}

+ (void)configureTextField:(id)arg1 withAttributes:(id)arg2;
+ (id)subtitleLinkTextAttributes;
+ (id)subtitle2TextAttributesHighlighted:(BOOL)arg1;
+ (id)subtitleTextAttributesDisabled:(BOOL)arg1;
+ (id)extendedTitleTextAttributes;
+ (id)titleTextAttributes;
+ (id)attributedStringForInputString:(id)arg1 actionTitle:(id)arg2 textAttributes:(id)arg3 linkTextAttributes:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PXPhotosGlobalFooterViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) __weak id <PXPhotosGlobalFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXFooterViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) double currentHeight; // @synthesize currentHeight=_currentHeight;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)layout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateTextViewConfiguration:(id)arg1 highlighted:(BOOL)arg2;
- (void)_updateProgress;
- (void)_updateSubtitle2;
- (void)_updateSubtitle1;
- (void)_updateExtendedTitle;
- (void)_updateTitle;
- (void)_animatedIconCrossedGridCycleBoundary;
- (void)_updateAnimatedIcon;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isFlipped;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

