//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/__NSCFLocalSessionTask.h>

#import "NSURLSessionDownloadTaskSubclass.h"
#import "__NSCFLocalDownloadFileOpener.h"

@class NSDictionary, NSObject<OS_dispatch_data>, NSString, __NSCFLocalDownloadFile;

__attribute__((visibility("hidden")))
@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener>
{
    CDUnknownBlockType _fileCompletion;
    __NSCFLocalDownloadFile *_downloadFile;
    BOOL _canWrite;
    BOOL _suppressProgress;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    int _seqNo;
    BOOL _needFinish;
    BOOL _didIssueNeedFinish;
    unsigned long long _totalWrote;
    CDUnknownBlockType _resumeCallback;
    long long _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    unsigned long long _transientWriteProgress;
    CDUnknownBlockType _afterDidReportProgressOnQueue;
    CDUnknownBlockType _dataAckCompletion;
}

+ (id)_requestFromResumeDataDictionary:(id)arg1;
+ (id)_requestFromResumeDataDictionary:(id)arg1 key:(id)arg2;
+ (id)_expandResumeData:(id)arg1;
@property(copy) CDUnknownBlockType dataAckCompletion; // @synthesize dataAckCompletion=_dataAckCompletion;
@property(copy) CDUnknownBlockType _afterDidReportProgressOnQueue; // @synthesize _afterDidReportProgressOnQueue;
@property(copy) CDUnknownBlockType resumeCallback; // @synthesize resumeCallback=_resumeCallback;
@property(retain) __NSCFLocalDownloadFile *downloadFile; // @synthesize downloadFile=_downloadFile;
@property(copy) CDUnknownBlockType fileCompletion; // @synthesize fileCompletion=_fileCompletion;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkWrite;
- (void)_private_fileCompletion;
- (void)_private_errorCompletion;
- (id)createResumeInformation:(id)arg1;
- (void)writeAndResume;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_private_posixError:(int)arg1;
- (void)reportProgress:(unsigned long long)arg1;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_completeInitialization;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3;
- (_Bool)setupForNewDownload:(id)arg1;
- (id)explicitDownloadDirectory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

