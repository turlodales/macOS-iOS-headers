//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

#import "NSProgressReporting.h"

@class BRGlobalProgressProxy, BRUploadAllFilesForLogOutOperation, NSMutableArray, NSOperationQueue, NSString;

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting>
{
    BRGlobalProgressProxy *_progress;
    NSMutableArray *_fileCoordinators;
    CDUnknownBlockType _downloadAllFilesCompletionBlock;
    NSOperationQueue *_internalQueue;
    BRUploadAllFilesForLogOutOperation *_uploadOp;
}

- (void).cxx_destruct;
@property(retain) BRGlobalProgressProxy *progress; // @synthesize progress=_progress;
@property(copy) CDUnknownBlockType downloadAllFilesCompletionBlock; // @synthesize downloadAllFilesCompletionBlock=_downloadAllFilesCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

