//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class NSObject<OS_dispatch_queue>;

@interface HAPCharacteristicEnableEventCompletionTuple : HMFObject
{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_completionQueue;
}

+ (id)enableEventCompletionTupleWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

@end

