//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class PDFAnnotationPopupPrivateVars;

@interface PDFAnnotationPopup : PDFAnnotation <NSCopying, NSCoding>
{
    PDFAnnotationPopupPrivateVars *_private2;
}

+ (struct CGRect)extraTextRectForBounds:(struct CGRect)arg1;
+ (struct CGRect)closeboxRectForBounds:(struct CGRect)arg1;
+ (struct CGRect)contentRectForBoundsNoClose:(struct CGRect)arg1;
+ (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
+ (struct CGRect)titlebarRectForBounds:(struct CGRect)arg1;
+ (struct CGRect)fillableRectForBounds:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)setColor:(id)arg1;
- (struct CGRect)adjustedRectForBox:(long long)arg1;
- (void)setDrawsText:(BOOL)arg1;
- (BOOL)drawsText;
- (void)setDrawsCloseWidget:(BOOL)arg1;
- (BOOL)drawsCloseWidget;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setParent:(id)arg1;
- (id)parent;
- (void)drawInContext:(struct CGContext *)arg1 withBounds:(struct CGRect)arg2;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (void)setContents:(id)arg1;
- (id)contents;
- (BOOL)shouldPrint;
- (id)color;
- (void)setPopup:(id)arg1;
- (id)modificationDate;
- (void)setIsOpen:(BOOL)arg1;
- (BOOL)isOpen;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

