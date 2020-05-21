//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface AMDelayedUpdateManager : NSObject
{
    NSMutableSet *_updaters;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSMutableSet *updaters; // @synthesize updaters=_updaters;
- (void)applicationWillTerminate:(id)arg1;
- (void)performDelayedUpdates;
- (void)removeUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)removeUpdaterInfo:(id)arg1;
- (void)addUpdater:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)startDelayedUpdate;
- (void)cancelDelayedUpdate;
- (id)init;

@end

