//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject
{
    id _inlineReceivers[12];
    NSMutableArray *_extraReceivers;
    SEL _selector;
    unsigned long long _count;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long count; // @synthesize count=_count;
@property(readonly) SEL selector; // @synthesize selector=_selector;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasReceivers;
- (id)initWithSelector:(SEL)arg1 receiversHash:(id)arg2;
- (id)initWithSelector:(SEL)arg1 receivers:(id)arg2;

@end

