//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, SGServiceContext;

@interface SGRequestContext : NSObject
{
    int _concurrencyBehavior;
    SGServiceContext *_serviceContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int concurrencyBehavior; // @synthesize concurrencyBehavior=_concurrencyBehavior;
@property(readonly, nonatomic) SGServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2;
- (id)init;
@property(readonly, nonatomic) NSOperationQueue *storageQueue;
@property(readonly, nonatomic) NSOperationQueue *processingQueue;

@end

