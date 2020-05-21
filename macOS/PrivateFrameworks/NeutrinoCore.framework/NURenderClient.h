//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, NUPriority, NURenderContext;

@interface NURenderClient : NSObject
{
    BOOL _shouldCoalesceUpdates;
    NSString *_name;
    NUPriority *_priority;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NURenderContext *_renderContext;
    CDUnknownBlockType _genericCompletionBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType genericCompletionBlock; // @synthesize genericCompletionBlock=_genericCompletionBlock;
@property(retain, nonatomic) NURenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(readonly) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain) NUPriority *priority; // @synthesize priority=_priority;
@property(nonatomic) BOOL shouldCoalesceUpdates; // @synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)submitGenericRequest:(id)arg1;
- (void)submitGenericRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 responseQueue:(id)arg2;
- (id)initWithName:(id)arg1;

@end

