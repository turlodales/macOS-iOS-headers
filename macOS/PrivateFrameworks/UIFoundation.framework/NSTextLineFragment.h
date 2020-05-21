//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSAttributedString, NSFont;

@interface NSTextLineFragment : NSObject <NSSecureCoding>
{
    struct __CTLine *_lineRef;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    long long _glyphCount;
    NSFont *_font;
    NSAttributedString *_attributedString;
    struct _NSRange _characterRange;
    struct CGPoint glyphOrigin;
    struct CGRect typographicBounds;
}

+ (BOOL)supportsSecureCoding;
@property struct CGPoint glyphOrigin; // @synthesize glyphOrigin;
@property struct CGRect typographicBounds; // @synthesize typographicBounds;
@property(readonly) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property(readonly, copy) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (long long)characterIndexForPoint:(struct CGPoint)arg1 fractionOfDistanceThroughGlyph:(double *)arg2;
- (struct CGPoint)locationForCharacterAtIndex:(long long)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 graphicsContext:(id)arg2;
- (unsigned long long)numberOfGlyphs;
- (struct CGRect)boundsWithType:(long long)arg1 options:(unsigned long long)arg2;
- (struct CGRect)typographicUsedBounds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setGlyphs:(const unsigned short *)arg1 advances:(const struct CGSize *)arg2 count:(long long)arg3 font:(id)arg4;
- (void)setLineRef:(struct __CTLine *)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2 range:(struct _NSRange)arg3;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end

