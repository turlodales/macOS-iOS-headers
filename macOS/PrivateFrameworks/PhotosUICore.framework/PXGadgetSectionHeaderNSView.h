//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "PXChangeObserver.h"

@class NSAttributedString, NSButton, NSLayoutConstraint, NSString, NSTextField, PXGadgetSectionHeader;

@interface PXGadgetSectionHeaderNSView : NSView <PXChangeObserver>
{
    CDStruct_5f1286c4 _updateFlags;
    PXGadgetSectionHeader *_headerModel;
    NSTextField *_titleTextField;
    NSButton *_accessoryButton;
    NSView *_divider;
    NSLayoutConstraint *_textFieldLeadingConstraint;
    NSLayoutConstraint *_buttonTrailingConstraint;
    NSLayoutConstraint *_buttonTextBaselineConstraint;
    NSLayoutConstraint *_dividerLeadingConstraint;
    NSLayoutConstraint *_dividerTrailingConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *dividerTrailingConstraint; // @synthesize dividerTrailingConstraint=_dividerTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *dividerLeadingConstraint; // @synthesize dividerLeadingConstraint=_dividerLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonTextBaselineConstraint; // @synthesize buttonTextBaselineConstraint=_buttonTextBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonTrailingConstraint; // @synthesize buttonTrailingConstraint=_buttonTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textFieldLeadingConstraint; // @synthesize textFieldLeadingConstraint=_textFieldLeadingConstraint;
@property(retain, nonatomic) NSView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(readonly, nonatomic) PXGadgetSectionHeader *headerModel; // @synthesize headerModel=_headerModel;
- (BOOL)isFlipped;
- (void)_buttonClicked;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateDividerIfNeeded;
- (void)_updateConstraintsIfNeeded;
- (void)_updateButtonIfNeeded;
- (void)_updateTitleIfNeeded;
- (void)layout;
@property(readonly, nonatomic) BOOL buttonHasImage;
@property(readonly, nonatomic) NSAttributedString *attributedButtonTitle;
- (void)_initializeConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

