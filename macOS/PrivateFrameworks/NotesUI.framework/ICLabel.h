//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSAttributedString, NSLayoutConstraint, NSString;

@interface ICLabel : NSTextField
{
    NSString *_string;
    NSAttributedString *_attributedString;
    long long _numberOfLines;
    double _spacing;
    double _paragraphSpacing;
    double _lineHeight;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void)updateText;
- (void)textDidChange:(id)arg1;
- (void)updatePreferredMaxLayoutWidth:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateHeightConstraint;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

