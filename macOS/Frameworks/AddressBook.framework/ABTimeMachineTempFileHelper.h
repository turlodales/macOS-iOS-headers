//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ABTimeMachineTempFileHelper : NSObject
{
}

+ (BOOL)copyDatabaseAtURL:(id)arg1 toUrl:(id)arg2 withCoordinator:(id)arg3 error:(id *)arg4;
+ (id)standardizedPathForPath:(id)arg1;
+ (id)createHashedMigrationDirectoryForDatabasePath:(id)arg1 error:(id *)arg2;
+ (id)temporaryDatabaseUrlForDatabasePath:(id)arg1 error:(id *)arg2;
+ (id)temporaryTimeMachineDirectory;
+ (id)temporaryDatabaseUrlByCopyingDatabaseAtPath:(id)arg1 withCoordinator:(id)arg2 error:(id *)arg3;

@end

