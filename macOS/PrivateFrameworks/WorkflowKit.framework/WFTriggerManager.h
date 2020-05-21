//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFDatabase;

@interface WFTriggerManager : NSObject
{
    WFDatabase *_database;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
- (id)configuredTriggerWithID:(id)arg1;
- (id)allConfiguredTriggers;
- (void)deleteTriggerWithIdentifier:(id)arg1 notifyDaemon:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateConfiguredTrigger:(id)arg1 triggerID:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveNewConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveNewConfiguredTrigger:(id)arg1 workflow:(id)arg2 notifyDaemon:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithDatabase:(id)arg1;

@end

