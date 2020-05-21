//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKSButton.h>

@class TLKLabel, TLKStackView;

__attribute__((visibility("hidden")))
@interface TLKSelectableGridButton : TLKSButton
{
    BOOL _customHighlight;
    TLKLabel *_topLabel;
    TLKLabel *_bottomLabel;
    TLKStackView *_stackView;
}

+ (id)selectableGridButton;
- (void).cxx_destruct;
@property(retain, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) TLKLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) TLKLabel *topLabel; // @synthesize topLabel=_topLabel;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layout;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
@property(nonatomic) BOOL customHighlight;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;

@end

