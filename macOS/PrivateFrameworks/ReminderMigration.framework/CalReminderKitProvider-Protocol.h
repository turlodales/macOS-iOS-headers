//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderMigration/NSObject-Protocol.h>

@class REMObjectID, REMSaveRequest, REMStore;
@protocol CalReminderKitDatabaseMigrationContext;

@protocol CalReminderKitProvider <NSObject>
- (void)setDefaultReminderListIdentifier:(REMObjectID *)arg1;
- (id <CalReminderKitDatabaseMigrationContext>)newDatabaseMigrationContext;
- (REMSaveRequest *)newSaveRequestWithStore:(REMStore *)arg1;
@end

