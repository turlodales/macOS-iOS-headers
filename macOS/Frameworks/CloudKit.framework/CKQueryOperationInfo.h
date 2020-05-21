//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding.h"

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSDictionary;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    BOOL _shouldFetchAssetContent;
    BOOL _fetchAllResults;
    CKQuery *_query;
    CKRecordZoneID *_zoneID;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    NSDictionary *_assetTransferOptionsByKey;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByKey; // @synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey;
@property(nonatomic) BOOL fetchAllResults; // @synthesize fetchAllResults=_fetchAllResults;
@property(nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) CKQuery *query; // @synthesize query=_query;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

