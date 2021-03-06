//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSProcessExecutionProvision.h>

@class BSMachPortSendRight, BSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision
{
    CDStruct_4e83c7bf _allowance;
    unsigned long long _baselineValue;
    unsigned long long _consumedValue;
    NSObject<OS_dispatch_queue> *_queue;
    BSTimer *_timer;
    BSMachPortSendRight *_taskRight;
}

+ (id)provisionWithResourceType:(long long)arg1 timeInterval:(double)arg2;
+ (id)provisionWithAllowance:(CDStruct_4e83c7bf)arg1;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_4e83c7bf allowance; // @synthesize allowance=_allowance;
- (BOOL)isResourceProvision;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)_getElapsedCPUTimeForTaskPort:(unsigned int)arg1;
- (BOOL)_queue_calculateValueConsumed:(out unsigned long long *)arg1;
- (BOOL)_queue_updateConsumption;
- (void)_queue_evaluateConsumption;
- (void)_queue_noteAllowanceExhausted;
- (void)_queue_stopMonitoring;
- (void)_prepareForReuse;
- (void)_stopMonitoring;
- (void)_updateProgress;
- (void)_beginMonitoring;
- (BOOL)allowanceRemaining:(out CDStruct_4e83c7bf *)arg1;
@property(nonatomic) long long type; // @dynamic type;
- (void)dealloc;
- (id)initWithAllowance:(CDStruct_4e83c7bf)arg1;

@end

