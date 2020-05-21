//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICMigrationUtilities : NSObject
{
}

+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1;
+ (void)deleteMigratedHTMLAccounts;
+ (void)updateAllLegacyAccountMigrationStates;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;
+ (void)clearPostIAMigrationFlagFromAccount:(id)arg1;
+ (BOOL)parentACAccountNeedsMigrationAfterIA:(id)arg1;
+ (void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 didMigrateOnMac:(BOOL)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

