//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordColumns.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns
{
    int _modelClassNameOffset;
    NSString *_modelClassName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *modelClassName; // @synthesize modelClassName=_modelClassName;
@property(readonly, nonatomic) int modelClassNameOffset; // @synthesize modelClassNameOffset=_modelClassNameOffset;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (id)initWithLocalZone:(id)arg1 modelClassName:(id)arg2;

@end

