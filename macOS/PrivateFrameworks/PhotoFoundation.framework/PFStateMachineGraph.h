//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PFStateMachineNode;

@interface PFStateMachineGraph : NSObject
{
    NSMutableDictionary *_nodes;
    NSMutableDictionary *_globalTransitions;
    PFStateMachineNode *_initialNode;
}

- (void).cxx_destruct;
@property(retain) PFStateMachineNode *initialNode; // @synthesize initialNode=_initialNode;
- (id)dot:(BOOL)arg1;
- (id)findNodeWithName:(id)arg1;
- (id)transitionForEventName:(id)arg1;
- (void)addGlobalTransitionOn:(id)arg1 to:(id)arg2;
- (void)addGlobalTransition:(id)arg1;
- (id)addNode:(id)arg1;
- (id)init;

@end

