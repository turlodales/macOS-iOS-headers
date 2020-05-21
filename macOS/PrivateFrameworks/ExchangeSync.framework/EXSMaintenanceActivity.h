//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EXSDataManager, NSBackgroundActivityScheduler;

@interface EXSMaintenanceActivity : NSObject
{
    EXSDataManager *_dataManager;
    NSBackgroundActivityScheduler *_scheduler;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBackgroundActivityScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) __weak EXSDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (CDUnknownBlockType)_doMaintenanceActivity;
- (void)invalidate;
- (void)scheduleMaintenanceActivity;
- (id)initWithDataManager:(id)arg1;

@end

