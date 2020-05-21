//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableDictionary, NSMutableSet, NSThread, PKDownloader, SUProduct;

@interface SUDownloader : NSObject
{
    unsigned long long _alreadyDownloadedSize;
    BOOL _background;
    BOOL _cancelled;
    SUProduct *_product;
    unsigned long long _totalDownloadSize;
    unsigned long long _currentlyDownloaded;
    PKDownloader *_downloader;
    NSThread *_downloaderThread;
    CDUnknownBlockType _completionHandler;
    NSError *_recentError;
    NSMutableDictionary *_currentlyDownloadingToAttempts;
    NSMutableSet *_refAbsoluteURLsAttempted;
}

@property(retain) NSMutableSet *refAbsoluteURLsAttempted; // @synthesize refAbsoluteURLsAttempted=_refAbsoluteURLsAttempted;
@property(retain) NSMutableDictionary *currentlyDownloadingToAttempts; // @synthesize currentlyDownloadingToAttempts=_currentlyDownloadingToAttempts;
@property(retain) NSError *recentError; // @synthesize recentError=_recentError;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSThread *downloaderThread; // @synthesize downloaderThread=_downloaderThread;
@property(retain, nonatomic) PKDownloader *downloader; // @synthesize downloader=_downloader;
@property(readonly) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly) BOOL background; // @synthesize background=_background;
@property(readonly) SUProduct *product; // @synthesize product=_product;
- (void)__runBlock:(CDUnknownBlockType)arg1;
- (void)_runBlockOnThread:(id)arg1 withBlock:(CDUnknownBlockType)arg2 waitUntilDone:(BOOL)arg3;
- (void)_runBlockOnDownloaderThread:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2 ignoreIfThreadStopped:(BOOL)arg3;
- (id)_packageReferenceForRetryingFailedPackageReference:(id)arg1 invalidatingCurrentReference:(BOOL)arg2;
- (id)_suPackageReferencesToContentCachingRefs:(id)arg1;
- (id)_suPackageReferenceForPKPackageReference:(id)arg1 withIntegrityInformation:(id)arg2;
- (id)_packageReferenceForPackageIdentifier:(id)arg1 withProductKey:(id)arg2 invalidatingPreviousRef:(id)arg3;
- (id)_packageIdentifiersToReferences:(id)arg1;
- (void)packageDownloader:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)packageDownloader:(id)arg1 didReceiveChallenge:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)packageDownloader:(id)arg1 shouldRetryFailedPackageReference:(id)arg2 previousError:(id)arg3;
- (void)packageDownloader:(id)arg1 didFinishPackageReference:(id)arg2 localPackageReference:(id)arg3;
- (void)packageDownloader:(id)arg1 didDownloadInvalidDataForPackageReference:(id)arg2;
- (void)packageDownloader:(id)arg1 didFailOnPackageReference:(id)arg2 withError:(id)arg3;
- (void)packageDownloader:(id)arg1 didStartDownloadingPackageWithReference:(id)arg2;
- (void)packageDownloaderDidStop:(id)arg1;
- (void)packageDownloaderDidStart:(id)arg1;
- (void)_cancelDownloaderThread;
- (void)stopDownloader;
@property(readonly) double estimatedTimeRemaining;
@property(readonly) double finiteProgress;
@property(readonly) unsigned long long totalDownloadSize; // @synthesize totalDownloadSize=_totalDownloadSize;
@property(readonly) unsigned long long currentlyDownloaded; // @synthesize currentlyDownloaded=_currentlyDownloaded;
- (void)cancelAndWaitUntilFullyCanceled;
- (void)cancel;
- (void)startDownloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithProduct:(id)arg1 inBackground:(BOOL)arg2;

@end

