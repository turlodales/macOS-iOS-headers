//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface NSPersistentUIEncodingQueue : NSObject
{
    NSOperationQueue *_operationQueue;
}

@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)finishEnqueuedImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishEnqueuedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

