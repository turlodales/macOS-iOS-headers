//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKSQLiteDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface CKPackageDBDelegate : NSObject <CKSQLiteDelegate>
{
}

@property(readonly, nonatomic) int userVersion;
- (BOOL)migrateDatabase:(id)arg1 fromVersion:(int)arg2;

@end

