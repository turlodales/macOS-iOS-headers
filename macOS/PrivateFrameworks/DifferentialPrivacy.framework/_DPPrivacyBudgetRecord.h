//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/NSSecureCoding-Protocol.h>
#import <DifferentialPrivacy/_DPStorageMOConversion-Protocol.h>

@class NSManagedObjectID, NSString;

@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding>
{
    BOOL _submitted;
    NSString *_key;
    double _creationDate;
    double _lastUpdate;
    long long _balance;
    NSManagedObjectID *_objectId;
}

+ (id)entityName;
+ (id)createRecordFromManagedObject:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectID *objectId; // @synthesize objectId=_objectId;
@property(nonatomic) BOOL submitted; // @synthesize submitted=_submitted;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (BOOL)copyFromManagedObject:(id)arg1;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPrivacyBudgetRecord:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 creationDate:(double)arg2 lastUpdate:(double)arg3 balance:(long long)arg4 objectId:(id)arg5;
- (id)init;

@end

