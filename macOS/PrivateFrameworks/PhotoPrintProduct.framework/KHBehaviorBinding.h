//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KHBehavior;

@interface KHBehaviorBinding : NSObject
{
    id _target;
    KHBehavior *_behavior;
}

- (void).cxx_destruct;
@property(retain) KHBehavior *behavior; // @synthesize behavior=_behavior;
@property __weak id target; // @synthesize target=_target;
- (BOOL)_object:(id)arg1 greaterThan:(id)arg2;
- (BOOL)_object:(id)arg1 equalsValue:(id)arg2;
- (BOOL)_object:(id)arg1 containsValue:(id)arg2;
- (id)_resultFromComponentArray:(id)arg1;
- (id)condition;
- (void)applyBehavior:(id)arg1 forTarget:(id)arg2;
- (void)evaluate;
- (void)dealloc;
- (id)initWithBehavior:(id)arg1 forTarget:(id)arg2;

@end

