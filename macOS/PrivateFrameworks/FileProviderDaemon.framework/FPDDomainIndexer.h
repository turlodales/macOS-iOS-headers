//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPDDomain, FPDExtension, NSDate, NSError, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSURL;

@interface FPDDomainIndexer : NSObject
{
    NSString *_domainIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSURL *_stateURL;
    NSURL *_needsAuthURL;
    BOOL _needsIndexing;
    BOOL _isIndexing;
    BOOL _enabled;
    BOOL _invalidated;
    BOOL _isStarted;
    unsigned long long _batchIndexedCount;
    unsigned long long _batchIndexedCountSinceLastIndexing;
    unsigned long long _consecutiveBatchErrorCount;
    NSDate *_lastIndexingStartDate;
    NSError *_lastError;
    BOOL _needsAuthentication;
    id <FPDDomainIndexerDelegate> _delegate;
    FPDDomain *_domain;
    FPDExtension *_extension;
}

- (void).cxx_destruct;
@property(nonatomic) __weak FPDExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) __weak FPDDomain *domain; // @synthesize domain=_domain;
@property(nonatomic) __weak id <FPDDomainIndexerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(nonatomic) BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
- (void)dumpStateTo:(id)arg1;
- (void)setIndexingEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signalChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_signalChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dropIndexWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)dropIndexWithError:(id *)arg1;
- (id)localSpotlightIndexer;
- (void)signalNeedsReindexFromScratchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)canContinueIndexing;
- (void)indexOneBatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerAnchor:(id)arg1;
- (void)_indexOneBatchIfPossibleClearingNeedsIndexing:(BOOL)arg1;
- (void)_handleOneBatchCompletionWithError:(id)arg1 hasMoreChanges:(BOOL)arg2;
- (BOOL)readNeedsAuthFromDisk;
- (void)persistsNeedsAuthOnDisk;
- (void)clearNeedsAuthOnDisk;
- (BOOL)readNeedsIndexingFromDisk;
- (void)clearNeedsIndexingOnDisk;
- (void)persistNeedsIndexingOnDisk;
- (void)invalidate;
- (void)_cancelTimer;
- (void)startWithSyncAnchor:(id)arg1;
- (id)description;
- (id)initWithExtension:(id)arg1 domain:(id)arg2 enabled:(BOOL)arg3;

@end

