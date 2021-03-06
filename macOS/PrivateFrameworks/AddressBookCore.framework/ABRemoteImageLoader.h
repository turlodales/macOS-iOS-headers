//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface ABRemoteImageLoader : NSObject
{
    NSOperationQueue *_workQueue;
}

+ (id)personForEmailAddresses:(id)arg1;
+ (id)sharedRemoteImageLoader;
- (void)cancelLoadingImageDataForTag:(long long)arg1;
- (long long)beginLoadingImageForEmails:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)beginLoadingImageForEmails:(id)arg1 forClient:(id)arg2;
- (long long)beginLoadingImageForPerson:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

