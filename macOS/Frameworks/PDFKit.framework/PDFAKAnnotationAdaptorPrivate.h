//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKAnnotation, PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFAKAnnotationAdaptorPrivate : NSObject
{
    _Bool isTornDown;
    PDFAnnotation *pdfAnnotation;
    AKAnnotation *akAnnotation;
    _Bool isObservingAKAnnotation;
    _Bool isSyncingFromPDFAnnotation;
    _Bool isSyncingFromAKAnnotation;
}

- (void).cxx_destruct;

@end

