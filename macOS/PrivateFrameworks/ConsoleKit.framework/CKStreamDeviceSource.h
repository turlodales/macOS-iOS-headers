//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConsoleKit/CKStreamSource.h>

#import "OSActivityStreamDelegate.h"

@class CKDevice, NSObject<OS_os_log>, NSString, OSActivityStream;

@interface CKStreamDeviceSource : CKStreamSource <OSActivityStreamDelegate>
{
    NSObject<OS_os_log> *_log;
    BOOL _includesDebugEntities;
    BOOL _includesInfoEntities;
    BOOL _wantsToStop;
    CKDevice *_device;
    long long _PID;
    OSActivityStream *_activityStream;
}

@property(nonatomic) BOOL wantsToStop; // @synthesize wantsToStop=_wantsToStop;
@property(retain, nonatomic) OSActivityStream *activityStream; // @synthesize activityStream=_activityStream;
@property(nonatomic) BOOL includesInfoEntities; // @synthesize includesInfoEntities=_includesInfoEntities;
@property(nonatomic) BOOL includesDebugEntities; // @synthesize includesDebugEntities=_includesDebugEntities;
@property(readonly, nonatomic) long long PID; // @synthesize PID=_PID;
@property(readonly, nonatomic) CKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)streamDidStop:(id)arg1;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)streamDidStart:(id)arg1;
- (BOOL)activityStream:(id)arg1 results:(id)arg2;
- (void)_failByStoppingActivityStreamFirst;
- (void)_updateStreamPredicates;
- (void)stop;
- (void)resume;
- (id)initWithDevice:(id)arg1 PID:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

