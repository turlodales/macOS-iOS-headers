//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PFMulticasterDistributionList.h"

@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList>
{
    _PFMulticasterReceiverList *_strongReceivers;
    _PFMulticasterReceiverList *_weakReceivers;
}

- (void).cxx_destruct;
- (void)enumerateReceiversWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)count;
- (id)initWithStrongReceivers:(id)arg1 weakReceivers:(id)arg2;

@end

