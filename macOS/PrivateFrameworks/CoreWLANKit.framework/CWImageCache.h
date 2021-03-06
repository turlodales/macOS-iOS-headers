//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CWImageCache : NSObject
{
    NSMutableDictionary *_imageCache;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedImageCache;
- (id)imageNamed:(id)arg1;
- (id)__imageNamed:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (id)init;

@end

