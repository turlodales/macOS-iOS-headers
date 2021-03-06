//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DuetActivityScheduler/NSExtensionRequestHandling-Protocol.h>

@class NSDate, NSString, _DASActivity, _DASExtensionRemoteContext;
@protocol OS_os_log, OS_os_transaction, _DASExtensionRunner;

@interface _DASExtension : NSObject <NSExtensionRequestHandling>
{
    _DASExtensionRemoteContext *_context;
    id <_DASExtensionRunner> _runner;
    _DASActivity *_activity;
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_log> *_log;
    NSDate *_startTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) _DASActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) id <_DASExtensionRunner> runner; // @synthesize runner=_runner;
@property(retain, nonatomic) _DASExtensionRemoteContext *context; // @synthesize context=_context;
- (void)suspend;
- (void)runner:(id)arg1 performActivity:(id)arg2;
- (void)_activityCompletedWithStatus:(unsigned char)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

