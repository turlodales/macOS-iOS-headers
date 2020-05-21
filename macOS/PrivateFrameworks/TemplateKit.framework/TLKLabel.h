//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSAttributedString, NSFont, NSString, TLKFormattedText, TLKMultilineText, TLKRichText;

@interface TLKLabel : NSTextField
{
    BOOL _supportsColorGlyphs;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _hasCustomTextColor;
    BOOL _attributedTextExplicitelySet;
    BOOL _attributedTextUpdateDisabled;
    BOOL _attributedTextUpdateSkipped;
    unsigned long long _prominence;
    TLKRichText *_richText;
    NSTextField *_overlayLabelForNonColoredGlyphs;
    NSFont *_originalFont;
}

+ (id)genericLabel;
+ (id)tertiaryLabel;
+ (id)secondaryLabel;
+ (id)primaryLabel;
- (void).cxx_destruct;
@property BOOL attributedTextUpdateSkipped; // @synthesize attributedTextUpdateSkipped=_attributedTextUpdateSkipped;
@property BOOL attributedTextUpdateDisabled; // @synthesize attributedTextUpdateDisabled=_attributedTextUpdateDisabled;
@property BOOL attributedTextExplicitelySet; // @synthesize attributedTextExplicitelySet=_attributedTextExplicitelySet;
@property BOOL hasCustomTextColor; // @synthesize hasCustomTextColor=_hasCustomTextColor;
@property(retain) NSFont *originalFont; // @synthesize originalFont=_originalFont;
@property(retain, nonatomic) NSTextField *overlayLabelForNonColoredGlyphs; // @synthesize overlayLabelForNonColoredGlyphs=_overlayLabelForNonColoredGlyphs;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) BOOL supportsColorGlyphs; // @synthesize supportsColorGlyphs=_supportsColorGlyphs;
@property(retain, nonatomic) TLKRichText *richText; // @synthesize richText=_richText;
@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
- (id)fontForSize:(double)arg1;
- (id)fontThatFitsCurrentTextWidthForOriginalFont:(id)arg1 forWidth:(double)arg2;
- (void)adjustFontSizeIfNecessaryForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) long long numberOfLines;
- (void)updateWithString:(id)arg1;
- (void)updateWithAttributedString:(id)arg1;
- (void)updateAttributedText;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)setTextColor:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
@property(retain, nonatomic) TLKFormattedText *formattedText;
@property(retain, nonatomic) TLKMultilineText *multilineText;
- (void)setAlignment:(long long)arg1;
- (void)setFont:(id)arg1 keepOriginal:(BOOL)arg2;
- (void)setFont:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (void)layout;
- (id)initWithProminence:(unsigned long long)arg1;
- (id)init;

@end

