//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDTimeCondition : NSObject
{
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (void).cxx_destruct;
- (id)description;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setTriggerEvent:(int)arg1;
- (int)triggerEvent;
- (BOOL)hasTriggerEvent;
- (void)setDelay:(int)arg1;
- (int)delay;
- (BOOL)hasDelay;
- (id)init;
- (int)writeDelay;

@end

