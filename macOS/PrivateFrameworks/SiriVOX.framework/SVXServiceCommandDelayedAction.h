//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SAUIDelayedActionCommand;

@interface SVXServiceCommandDelayedAction : NSObject
{
    SAUIDelayedActionCommand *_command;
    id <SVXTaskTracking> _taskTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SVXTaskTracking> taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, copy, nonatomic) SAUIDelayedActionCommand *command; // @synthesize command=_command;
- (id)initWithCommand:(id)arg1 taskTracker:(id)arg2;

@end

