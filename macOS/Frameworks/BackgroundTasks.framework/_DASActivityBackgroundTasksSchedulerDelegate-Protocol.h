//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackgroundTasks/NSObject-Protocol.h>

@class NSSet;
@protocol _DASActivityBackgroundTasksScheduler;

@protocol _DASActivityBackgroundTasksSchedulerDelegate <NSObject>
- (void)scheduler:(id <_DASActivityBackgroundTasksScheduler>)arg1 willExpireActivities:(NSSet *)arg2;
- (void)scheduler:(id <_DASActivityBackgroundTasksScheduler>)arg1 handleLaunchForActivities:(NSSet *)arg2;
@end

