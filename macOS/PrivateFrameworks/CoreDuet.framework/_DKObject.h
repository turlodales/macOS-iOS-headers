//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "_DKProtobufConverting.h"

@class NSDate, NSString, NSUUID, _DKSource;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding>
{
    NSUUID *_UUID;
    _DKSource *_source;
    NSDate *_creationDate;
    NSDate *_localCreationDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;
+ (id)fetchObjectWithUUID:(id)arg1 context:(id)arg2;
+ (id)entityName;
- (void).cxx_destruct;
@property(retain) NSDate *localCreationDate; // @synthesize localCreationDate=_localCreationDate;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain) _DKSource *source; // @synthesize source=_source;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (BOOL)isEqual:(id)arg1;
- (id)stringValue;
- (double)doubleValue;
- (long long)integerValue;
- (BOOL)boolValue;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)toPBCodable;
- (BOOL)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2;
- (BOOL)copyToManagedObject:(id)arg1;
- (long long)typeCode;
- (id)entityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

