//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, _CDInteractionStore;

@interface _CDInteractionStoreNotifier : NSObject
{
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
    _CDInteractionStore *_interactionStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
- (void)deleted;
- (void)recorded:(id)arg1;
- (void)postPackedMechanisms:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithInteractionStore:(id)arg1;

@end

