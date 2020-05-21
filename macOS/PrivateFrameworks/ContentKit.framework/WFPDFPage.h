//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WFPDFContentStream, WFPDFDocument;

@interface WFPDFPage : NSObject
{
    WFPDFContentStream *_contentStream;
    NSDictionary *_dictionary;
    struct CGPDFPage *_pageRef;
    WFPDFDocument *_document;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak WFPDFDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) struct CGPDFPage *pageRef; // @synthesize pageRef=_pageRef;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) WFPDFContentStream *contentStream; // @synthesize contentStream=_contentStream;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (struct CGRect)boundsForBox:(int)arg1;
- (struct CGAffineTransform)drawingTransformForBox:(int)arg1 rect:(struct CGRect)arg2 rotation:(int)arg3 preservingAspectRatio:(BOOL)arg4;
@property(readonly, nonatomic) int rotation;
- (void)dealloc;
- (id)initWithPageRef:(struct CGPDFPage *)arg1 document:(id)arg2;

@end

