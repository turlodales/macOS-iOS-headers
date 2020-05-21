//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class BRCSyncContext, BRCThrottle, CKOperationGroup, NSDate, NSError, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_activity>, NSObject<OS_os_transaction>, NSUUID;

__attribute__((visibility("hidden")))
@interface _BRCOperation : NSOperation
{
    BRCSyncContext *_syncContext;
    unsigned char _operationUUID[16];
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_os_transaction> *_executionTransaction;
    NSDate *_startDate;
    NSDate *_finishDate;
    NSDate *_lastTryDate;
    NSDate *_nextTryDate;
    NSError *_lastError;
    long long _throttleHash;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_group> *_group;
    id _pmAssertionID;
    NSObject<OS_os_activity> *_Activity;
    NSMutableArray *_associatedEventMetrics;
    BOOL _finished;
    BOOL _nonDiscretionary;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BRCThrottle *_operationThrottle;
    BRCThrottle *_operationFailureThrottle;
    CDUnknownBlockType _mainBlock;
    CDUnknownBlockType _finishBlock;
    unsigned long long _logSections;
    CKOperationGroup *_operationGroup;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL nonDiscretionary; // @synthesize nonDiscretionary=_nonDiscretionary;
@property(retain, nonatomic) CKOperationGroup *group; // @synthesize group=_operationGroup;
@property(readonly, nonatomic) BRCSyncContext *syncContext; // @synthesize syncContext=_syncContext;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long logSections; // @synthesize logSections=_logSections;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType mainBlock; // @synthesize mainBlock=_mainBlock;
@property(nonatomic) BRCThrottle *operationFailureThrottle; // @synthesize operationFailureThrottle=_operationFailureThrottle;
@property(nonatomic) BRCThrottle *operationThrottle; // @synthesize operationThrottle=_operationThrottle;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void)associateCKOperationsToEventMetric:(id)arg1;
- (void)addSubOperation:(id)arg1;
- (void)addSubOperation:(id)arg1 overrideContext:(id)arg2 allowsCellularAccess:(id)arg3;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)cancel;
- (void)start;
- (void)schedule;
- (void)_scheduleExecutionWithPreviousError:(id)arg1;
- (void)_executeWithPreviousError:(id)arg1;
- (void)_main;
- (void)main;
- (BOOL)finishIfCancelled;
- (BOOL)_finishIfCancelled;
@property(nonatomic, getter=isExecuting) BOOL executing;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_lastError;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (id)subclassableDescriptionWithContext:(id)arg1;
- (id)stateWithContext:(id)arg1;
- (BOOL)isConcurrent;
@property(readonly, nonatomic) BOOL usesBackgroundSession;
- (void)dealloc;
- (id)createActivity;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 syncContext:(id)arg2;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;
- (id)init;
@property(readonly, nonatomic) NSUUID *operationID;

@end

