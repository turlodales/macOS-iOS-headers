//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSString;

@interface ABOnBlueButton : NSButton
{
    id _privateTarget;
    SEL _privateAction;
    BOOL _roundPlatterStyle;
    NSString *_tintedImageCacheKey;
    NSString *_lastAppearanceName;
}

+ (void)applyDefaultStyleToButton:(id)arg1;
+ (void)applyVibrantLightStyleToButton:(id)arg1;
+ (void)applyVibrantDarkStyleToButton:(id)arg1;
+ (void)applyStylingToButton:(id)arg1 usingCacheKey:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastAppearanceName; // @synthesize lastAppearanceName=_lastAppearanceName;
@property(retain, nonatomic) NSString *tintedImageCacheKey; // @synthesize tintedImageCacheKey=_tintedImageCacheKey;
@property(nonatomic, getter=isRoundPlatterStyle) BOOL roundPlatterStyle; // @synthesize roundPlatterStyle=_roundPlatterStyle;
@property SEL privateAction; // @synthesize privateAction=_privateAction;
@property __weak id privateTarget; // @synthesize privateTarget=_privateTarget;
- (void)setNamedImageWrapper:(id)arg1;
- (void)buttonWasClicked:(id)arg1;
- (void)performPrivateAction;
- (void)resetButtonStateAfterMouseUp;
- (struct CGSize)intrinsicContentSize;
- (double)baselineOffsetFromBottom;
- (void)layout;
- (void)setEnabled:(BOOL)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)updateLayer;
- (void)effectiveAppearanceDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

