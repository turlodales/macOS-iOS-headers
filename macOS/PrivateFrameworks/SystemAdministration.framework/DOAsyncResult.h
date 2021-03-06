//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemAdministration/DOAsyncResultProtocol-Protocol.h>

@interface DOAsyncResult : NSObject <DOAsyncResultProtocol>
{
    BOOL mDone;
    long long mResult;
    CDUnknownBlockType mCompletionBlock;
    void *mContext;
}

@property(readonly) void *context; // @synthesize context=mContext;
@property(readonly) long long result; // @synthesize result=mResult;
@property(readonly) BOOL done; // @synthesize done=mDone;
- (void)waitForResult;
- (oneway void)setDoneWithResult:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1 context:(void *)arg2;

@end

