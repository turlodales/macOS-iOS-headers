//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import "NSCopying.h"

@class PDFAnnotationStampPrivateVars;

@interface PDFAnnotationStamp : PDFAnnotation <NSCopying>
{
    PDFAnnotationStampPrivateVars *_private2;
}

- (void).cxx_destruct;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (void)setName:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

