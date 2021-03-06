//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKSQLiteItem-Protocol.h>
#import <CloudKit/CKXPCSuitableString-Protocol.h>
#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSString;

@interface CKRecordID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying>
{
    NSString *_recordName;
    CKRecordZoneID *_zoneID;
}

+ (BOOL)isValidRecordName:(id)arg1 outError:(id *)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
- (long long)compareToRecordID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)ckShortDescription;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
- (id)CKPropertiesDescriptionWithProperties:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)initWithSqliteRepresentation:(id)arg1;
- (id)sqliteRepresentation;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordName:(id)arg1;
- (id)init;
- (id)CKXPCSuitableString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

