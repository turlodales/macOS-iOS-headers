//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OS_xpc_remote_channel;
@protocol OS_dispatch_io;

__attribute__((visibility("hidden")))
@interface OS_xpc_remote_pending_stream : NSObject
{
    unsigned long long stream_id;
    OS_xpc_remote_channel *channel;
    NSObject<OS_dispatch_io> *io;
    int direction;
    CDUnknownBlockType completion_handler;
    int error;
    OS_xpc_remote_pending_stream *link_stqe_next;
}

- (void).cxx_destruct;

@end

