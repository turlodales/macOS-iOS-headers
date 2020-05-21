//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMBLocalSQLContext, HMFActivity, NSString;

@interface HMBLocalSQLContextInputBlock : HMFObject <HMFLogging>
{
    unsigned long long _blockRow;
    HMFActivity *_activity;
    HMBLocalSQLContext *_owner;
    unsigned long long _zoneRow;
    unsigned long long _type;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(nonatomic) __weak HMBLocalSQLContext *owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) unsigned long long blockRow; // @synthesize blockRow=_blockRow;
- (id)logIdentifier;
- (id)abort;
- (id)commit:(id)arg1;
- (id)updateExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4;
- (id)insertExternalID:(id)arg1 externalData:(id)arg2 modelEncoding:(unsigned long long)arg3 modelData:(id)arg4;
- (id)attributeDescriptions;
- (id)initWithOwner:(id)arg1 zoneRow:(unsigned long long)arg2 blockRow:(unsigned long long)arg3 type:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

