//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface CLSCurationDebugObject : NSObject
{
    NSMutableArray *_stateHistory;
    unsigned long long _tentativeSectionStateHistoryLength;
    unsigned long long _stateAtBeginningOfTentativeSection;
    unsigned long long _state;
}

+ (id)stringForState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly) NSArray *stateHistory; // @synthesize stateHistory=_stateHistory;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (id)timestamp;
- (id)dictionaryRepresentation;
- (void)endTentativeSectionWithSuccess:(BOOL)arg1;
- (void)beginTentativeSection;
- (void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3;
- (void)setState:(unsigned long long)arg1 withReason:(id)arg2 agent:(id)arg3 stage:(id)arg4;
- (id)init;

@end

