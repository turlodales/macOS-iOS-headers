//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "CoreTelephonyClientDelegateProxyInterface.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientDelegateProxy : NSProxy <CoreTelephonyClientDelegateProxyInterface>
{
    struct queue _userQueue;
    id _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithQueue:(struct queue)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

