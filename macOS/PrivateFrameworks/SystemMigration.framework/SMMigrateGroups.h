//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemMigration/SMMigrationEngineStep.h>

@interface SMMigrateGroups : SMMigrationEngineStep
{
}

- (BOOL)createGroup:(id)arg1 inDB:(id)arg2;
- (BOOL)deleteGroup:(id)arg1 inDB:(id)arg2;
- (id)createGroupsInDB:(id)arg1;
- (BOOL)migrateGroups;
- (id)postProcess;
- (double)estimatedTimeToCompletePhase:(unsigned long long)arg1;

@end

