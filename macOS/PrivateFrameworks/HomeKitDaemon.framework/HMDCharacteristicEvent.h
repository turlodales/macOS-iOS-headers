//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCharacteristicEventBase.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDCharacteristicEvent : HMDCharacteristicEventBase <NSSecureCoding>
{
    id _eventValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
- (id)metricData;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createPayload;
- (id)dumpState;
- (BOOL)_compareEventValue:(id)arg1;
- (BOOL)_evaluateNewValue:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (id)emptyModelObject;
- (id)description;
- (id)initWithModel:(id)arg1 home:(id)arg2;

@end

