//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAttributedString.h"

@interface NSAttributedString (NSStringDrawing)
+ (id)attributedStringWithAttachment:(id)arg1;
+ (id)_documentTypeForFileType:(id)arg1;
+ (id)allowedSecureCodingClasses;
+ (BOOL)_isAttributedStringAgent;
- (struct CGSize)size;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1;
- (BOOL)hasColorGlyphsInRange:(struct _NSRange)arg1;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2;
- (struct CGRect)boundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2 context:(id)arg3;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 withTrackingAdjustment:(double)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange)arg1 scaledByScaleFactor:(double)arg2;
- (void)drawWithRect:(struct CGRect)arg1 options:(long long)arg2 context:(id)arg3;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(char *)arg3;
- (BOOL)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rulerAttributesInRange:(struct _NSRange)arg1;
- (id)fontAttributesInRange:(struct _NSRange)arg1;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id *)arg2;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id *)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id *)arg2;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id *)arg3;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id *)arg3 error:(id *)arg4;
- (id)_documentFromRange:(struct _NSRange)arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id *)arg4;
- (id)_htmlDocumentFragmentString:(struct _NSRange)arg1 documentAttributes:(id)arg2 subresources:(id *)arg3;
- (id)docFormatFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2;
- (id)fileWrapperFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (id)_appearanceToUseForSavingWithDocumentAttributes:(id)arg1;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange)arg1;
- (BOOL)containsAttachments;
- (BOOL)containsAttachmentsInRange:(struct _NSRange)arg1;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2 usesAlternativeBreaker:(BOOL)arg3;
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1;
- (id)defaultLanguage;
- (BOOL)_isStringDrawingTextStorage;
@end

