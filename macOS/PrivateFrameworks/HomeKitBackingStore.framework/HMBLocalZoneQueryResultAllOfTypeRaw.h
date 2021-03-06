//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBSQLQueryIterator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultAllOfTypeRaw : HMBSQLQueryIterator
{
    int _zoneRowBindOffset;
    int _modelTypeBindOffset;
    unsigned long long _returning;
    unsigned long long _zoneRow;
    NSString *_modelType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int modelTypeBindOffset; // @synthesize modelTypeBindOffset=_modelTypeBindOffset;
@property(readonly, nonatomic) NSString *modelType; // @synthesize modelType=_modelType;
@property(readonly, nonatomic) int zoneRowBindOffset; // @synthesize zoneRowBindOffset=_zoneRowBindOffset;
@property(readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(readonly, nonatomic) unsigned long long returning; // @synthesize returning=_returning;
- (id)fetchRowFromStatement:(struct sqlite3_stmt *)arg1 skip:(char *)arg2 updatedSequence:(unsigned long long *)arg3 error:(id *)arg4;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)initWithLocalZone:(id)arg1 zoneRow:(unsigned long long)arg2 modelType:(id)arg3 returning:(unsigned long long)arg4;

@end

