//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalReminderMigrationDefaultsProvider.h"

@class NSString;

@interface CalDefaultReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>
{
}

+ (id)sharedInstance;
@property(nonatomic) BOOL havePerformedReminderMigrationCleanup;
@property(readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property(readonly, nonatomic) NSString *defaultReminderListIdentifier;
- (void)setRemindersHaveBeenMigratedAndDeleteCalendarCache:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

