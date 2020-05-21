//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFDumpState.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSString, NSUUID;

@interface HMDApplicationData : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>
{
    NSUUID *_parentUUID;
    NSUUID *_uuid;
    NSMutableDictionary *_appDataDictionary;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *appDataDictionary; // @synthesize appDataDictionary=_appDataDictionary;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateParentUUIDIfNil:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)dumpState;
- (id)dictionary;
- (void)removeApplicationDataForIdentifier:(id)arg1;
- (id)applicationDataForIdentifier:(id)arg1;
- (void)setApplicationData:(id)arg1 forIdentifier:(id)arg2;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)initWithDictionary:(id)arg1 parentUUID:(id)arg2;
- (id)initWithParentUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

