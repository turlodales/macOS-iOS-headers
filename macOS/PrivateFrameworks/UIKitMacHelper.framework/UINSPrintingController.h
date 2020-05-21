//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UINSPrintingController : NSObject
{
    BOOL _isShowingPrintOrExportSheet;
    BOOL _isShowingPrintOrExportAppModalDialog;
    NSString *_sceneIdentifier;
}

+ (id)_currentPrintInfoDictionaryForPrintOperation:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void)_abortModalPrintOperation;
- (void)_runModalPrintOperation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)_newNSPrintInfoFromUIPrintInfo:(id)arg1 isExport:(BOOL)arg2;
- (id)_printOperationWithPrintInfo:(id)arg1 andPDFDocumentGenerator:(CDUnknownBlockType)arg2;
- (id)_pdfExportOperationWithPrintInfo:(id)arg1 andPDFDocumentGenerator:(CDUnknownBlockType)arg2;
- (void)dismissPrintOrExportPanel;
- (void)_showPanelWithPrintInfo:(id)arg1 andPDFDocumentGenerator:(CDUnknownBlockType)arg2 isExport:(BOOL)arg3;
- (void)showExportPanelWithPrintInfo:(id)arg1 andPDFDocumentGenerator:(CDUnknownBlockType)arg2;
- (void)showPrintPanelWithPrintInfo:(id)arg1 andPDFDocumentGenerator:(CDUnknownBlockType)arg2;
- (id)init;

@end

