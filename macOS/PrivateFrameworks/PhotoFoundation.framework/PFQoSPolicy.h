//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PFQoSPolicy : NSObject
{
    NSMutableDictionary *_qosClasses;
    NSObject<OS_dispatch_queue> *_qosCacheAccess;
}

- (void).cxx_destruct;
- (id)copy;
- (id)qosLevelStringForServiceType:(id)arg1;
- (unsigned int)qosClassForServcieType:(id)arg1;
- (id)qosQueueForServcieType:(id)arg1;
- (void)setQoS:(unsigned int)arg1 forServiceType:(id)arg2;
- (id)init;

@end

