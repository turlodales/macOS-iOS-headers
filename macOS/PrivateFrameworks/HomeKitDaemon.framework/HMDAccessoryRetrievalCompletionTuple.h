//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryRetrievalCompletionTuple : HMFObject
{
    long long _linkType;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completion;
}

+ (id)tupleWithLinkType:(long long)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long linkType; // @synthesize linkType=_linkType;

@end

