//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMObjectMerge.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class HMActionSet, HMFUnfairLock, NSString, NSUUID, _HMContext;

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying>
{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    HMActionSet *_actionSet;
    _HMContext *_context;
    unsigned long long _type;
}

+ (BOOL)supportsSecureCoding;
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (id)encodeAsProtoBuf;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
@property(readonly) BOOL requiresDeviceUnlock;
@property(readonly, getter=isValid) BOOL valid;
@property __weak HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (unsigned long long)actionType;
- (void)_invalidate;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (id)init;
- (id)initWithUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

