//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding.h"

@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _allowDefaultZoneSave;
    BOOL _markZonesAsUserPurged;
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    long long _maxZoneSaveAttempts;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long maxZoneSaveAttempts; // @synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts;
@property(nonatomic) BOOL markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
@property(nonatomic) BOOL allowDefaultZoneSave; // @synthesize allowDefaultZoneSave=_allowDefaultZoneSave;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

