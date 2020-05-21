//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSObject<OS_dispatch_queue>, OSPRequest;

@interface OSPOperationController : NSObject
{
    OSPRequest *_request;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSMutableArray *operations; // @synthesize operations=_operations;
@property(retain) OSPRequest *request; // @synthesize request=_request;
- (void)_addOperation:(id)arg1;
- (void)_runOperations;
- (void)personalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)personalize;
- (id)initWithRequest:(id)arg1;

@end

