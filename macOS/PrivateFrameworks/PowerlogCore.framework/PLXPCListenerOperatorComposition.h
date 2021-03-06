//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PLOperator;

@interface PLXPCListenerOperatorComposition : NSObject
{
    NSDictionary *_registration;
    CDUnknownBlockType _operatorBlock;
    PLOperator *_operator;
}

- (void).cxx_destruct;
@property __weak PLOperator *operator; // @synthesize operator=_operator;
@property(copy, nonatomic) CDUnknownBlockType operatorBlock; // @synthesize operatorBlock=_operatorBlock;
@property(readonly) NSDictionary *registration; // @synthesize registration=_registration;
- (id)description;
- (void)messageRecievedForClientID:(short)arg1 withProcessName:(id)arg2 withKey:(id)arg3 withPayload:(id)arg4;
- (id)initWithOperator:(id)arg1 withRegistration:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

@end

