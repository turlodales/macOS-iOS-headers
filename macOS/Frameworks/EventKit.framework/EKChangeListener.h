//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray;

@interface EKChangeListener : NSObject
{
    NSPointerArray *_delegates;
}

+ (id)relatedItemFor:(id)arg1 changeNotification:(id)arg2;
+ (id)updatedObjectFor:(id)arg1 changeNotification:(id)arg2;
@property(retain) NSPointerArray *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)objectsChangedNotification:(id)arg1;
- (id)_orderedDelegates;
- (void)registerDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

