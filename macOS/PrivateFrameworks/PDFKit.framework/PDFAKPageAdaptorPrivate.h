//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKPageModelController, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFAKPageAdaptorPrivate : NSObject
{
    _Bool isTornDown;
    PDFPage *pdfPage;
    AKPageModelController *akPageModelController;
    _Bool isObservingPageModel;
    _Bool isSyncingFromPDFPage;
    _Bool isSyncingFromAKPageModel;
}

- (void).cxx_destruct;

@end

