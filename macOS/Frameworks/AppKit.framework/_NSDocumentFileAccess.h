//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/_NSDocumentSerializationObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSDocumentFileAccess : _NSDocumentSerializationObject
{
    unsigned long long _continueCount;
    unsigned long long _fileURLStabilizationCount;
    NSMutableArray *_pendingInferiorFileURLOnlyAccesses;
    unsigned long long _fileURLAccessorCount;
    NSMutableArray *_fileAccessCanContinueBlocks;
    _NSDocumentFileAccess *_superiorFileAccess;
    BOOL _invokedOnMainThread;
    BOOL _accessesFileURLOnly;
}

@property BOOL accessesFileURLOnly; // @synthesize accessesFileURLOnly=_accessesFileURLOnly;
@property BOOL invokedOnMainThread; // @synthesize invokedOnMainThread=_invokedOnMainThread;
@property(retain) _NSDocumentFileAccess *superiorFileAccess; // @synthesize superiorFileAccess=_superiorFileAccess;
- (void)whenFileAccessCanContinueInvokeBlock:(CDUnknownBlockType)arg1;
- (void)removedFileURLOnlyAccess;
- (void)addedFileURLOnlyAccess;
- (void)dequeueInferiorFileURLOnlyFileAccess:(id)arg1;
- (void)enqueueInferiorFileURLOnlyFileAccess:(id)arg1;
@property(readonly) BOOL canContinueFileAccess;
- (void)stabilizedFileURL;
- (void)_attemptToGrantInferiorFileAccess:(id)arg1;
@property(readonly) BOOL fileURLStabilized;
- (void)discontinueFileAccess;
- (void)continueFileAccess;
@property(readonly) BOOL canFinishFileAccess;
- (void)dealloc;
- (id)init;

@end

