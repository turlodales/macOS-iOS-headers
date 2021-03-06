//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface _NSHTTPConnectionInfo : NSObject
{
    struct HTTPConnectionInfo *_httpConnectionInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *__delegateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *_delegateQueue; // @synthesize _delegateQueue=__delegateQueue;
@property(readonly) BOOL isValid;
- (void)sendPingWithReceiveHandler:(CDUnknownBlockType)arg1;
- (void)invalidateUnderlyingConnection;
- (id)initWithHTTPConnectionInfo:(struct HTTPConnectionInfo *)arg1 queue:(id)arg2;

@end

