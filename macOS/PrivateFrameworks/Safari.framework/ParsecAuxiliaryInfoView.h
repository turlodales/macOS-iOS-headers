//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSLayoutConstraint, NSStackView, NSTextField;

__attribute__((visibility("hidden")))
@interface ParsecAuxiliaryInfoView : NSView
{
    NSStackView *_labelStackView;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_bottomConstraint;
    long long _backgroundStyle;
    NSTextField *_primaryLabel;
    NSTextField *_topSecondaryLabel;
    NSTextField *_bottomSecondaryLabel;
    NSColor *_bottomSecondaryLabelColor;
    long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSColor *bottomSecondaryLabelColor; // @synthesize bottomSecondaryLabelColor=_bottomSecondaryLabelColor;
@property(readonly, nonatomic) NSTextField *bottomSecondaryLabel; // @synthesize bottomSecondaryLabel=_bottomSecondaryLabel;
@property(readonly, nonatomic) NSTextField *topSecondaryLabel; // @synthesize topSecondaryLabel=_topSecondaryLabel;
@property(readonly, nonatomic) NSTextField *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void)_reconfigureLabels;
- (void)_removeSecondaryLabels;
- (void)_removePrimaryLabel;
- (void)_insertSecondaryLabels;
- (void)_insertPrimaryLabel;
- (BOOL)_shouldShowSecondaryLabels;
- (BOOL)_shouldShowPrimaryLabel;
- (void)setBackgroundStyle:(long long)arg1;
- (void)awakeFromNib;

@end

