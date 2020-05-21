//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSString, REMStore, REMStoreContainerToken;

@interface REMDatabaseMigrationContext : NSObject
{
    BOOL _hasPerformedEnsureAccountsExist;
    REMStoreContainerToken *_containerToken;
    REMStore *_cachedStore;
    NSDate *_migrationStartDate;
    NSString *_lastReportedErrorIdentifier;
    unsigned long long _lastReportedErrorStage;
    NSError *_lastReportedError;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *lastReportedError; // @synthesize lastReportedError=_lastReportedError;
@property(nonatomic) unsigned long long lastReportedErrorStage; // @synthesize lastReportedErrorStage=_lastReportedErrorStage;
@property(retain, nonatomic) NSString *lastReportedErrorIdentifier; // @synthesize lastReportedErrorIdentifier=_lastReportedErrorIdentifier;
@property(nonatomic) BOOL hasPerformedEnsureAccountsExist; // @synthesize hasPerformedEnsureAccountsExist=_hasPerformedEnsureAccountsExist;
@property(retain, nonatomic) NSDate *migrationStartDate; // @synthesize migrationStartDate=_migrationStartDate;
@property(retain, nonatomic) REMStore *cachedStore; // @synthesize cachedStore=_cachedStore;
@property(retain, nonatomic) REMStoreContainerToken *containerToken; // @synthesize containerToken=_containerToken;
- (BOOL)_cleanLocalDatabases:(id *)arg1;
- (id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)arg1;
- (BOOL)ensureAccountsExist:(id *)arg1;
- (BOOL)ensureAccountsExist:(id)arg1 error:(id *)arg2;
- (BOOL)ensureAccountsExistWithMigrationAccountInfos:(id)arg1 error:(id *)arg2;
- (void)_diagnosticReportWithStage:(unsigned long long)arg1 failureIdentifier:(id)arg2 error:(id)arg3;
- (void)reportMigrationDidFinishWithSuccess:(BOOL)arg1;
- (void)_postMigrationLocalAccountCleanup;
- (void)reportMigrationErrorWithIdentifier:(id)arg1 atStage:(unsigned long long)arg2 error:(id)arg3 objectLocator:(id)arg4;
- (void)reportMigrationWillBegin;
- (void)dealloc;
- (void)destroySandboxContainerIfNecessary;
- (id)remStore;
- (void)setShouldDataAccessStopSyncingReminders:(BOOL)arg1;
@property(nonatomic) BOOL isDatabaseMigrated;
@property(readonly, nonatomic) BOOL shouldDeleteMigratedData;
- (id)initWithSandboxDatabaseEnabled:(BOOL)arg1;
- (id)init;

@end

