//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNQueueingStrategy-Protocol.h>

@class NSString;

@interface _CNBoundedQueueingStrategy : NSObject <CNQueueingStrategy>
{
    unsigned long long _capacity;
    CDUnknownBlockType _overflowHandler;
}

- (void).cxx_destruct;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

