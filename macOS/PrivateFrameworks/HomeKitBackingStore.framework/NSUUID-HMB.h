//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSUUID.h"

#import "HMBQueryableModelFieldCoder.h"

@class NSString;

@interface NSUUID (HMB) <HMBQueryableModelFieldCoder>
+ (id)hmbUUIDFromData:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbUUIDWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
- (id)data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

