//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKNotificationInfo, CKRecordZoneID, NSPredicate, NSString;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_subscriptionID;
    long long _subscriptionType;
    CKNotificationInfo *_notificationInfo;
    CKRecordZoneID *_zoneID;
    NSString *_recordType;
    NSPredicate *_predicate;
    unsigned long long _subscriptionOptions;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long subscriptionOptions; // @synthesize subscriptionOptions=_subscriptionOptions;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(copy, nonatomic) CKNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(nonatomic) long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(copy, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)_subscriptionOptions;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3;
- (id)_initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2;
- (id)_initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (id)_initWithSubscriptionType:(long long)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3;
- (id)init;
- (id)description;
- (id)CKPropertiesDescription;
- (id)debugDescription;
- (void)_validateSubscriptionOptions:(unsigned long long)arg1;
- (id)_initBare;

@end

