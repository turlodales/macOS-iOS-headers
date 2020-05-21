//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACDDatabase, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface ACDDatabaseBackupActivity : NSObject
{
    BOOL _xpcActivityPending;
    NSObject<OS_xpc_object> *_activityExecutionCriteria;
    NSObject<OS_dispatch_queue> *_queue;
    ACDDatabase *_database;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) ACDDatabase *database; // @synthesize database=_database;
- (void)scheduleBackupIfNonexistent;
- (void)scheduleBackup;
- (void)_registerActivitySchedulingBackup:(BOOL)arg1;
- (void)_registerActivityIfNeededSchedulingBackup:(BOOL)arg1;
- (void)registerActivityIfNeeded;
- (id)activityCriteria;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end

