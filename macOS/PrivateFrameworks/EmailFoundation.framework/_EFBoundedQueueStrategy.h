//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFQueueingStrategy.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _EFBoundedQueueStrategy : NSObject <EFQueueingStrategy>
{
    CDUnknownBlockType _overflowHandler;
    unsigned long long _capacity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) CDUnknownBlockType overflowHandler; // @synthesize overflowHandler=_overflowHandler;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3;
@property(readonly, nonatomic) NSString *descriptionType;
- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

