//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVURLAsset, AVWeakReference, NSError, NSNumber, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadSessionInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer *player;
    struct OpaqueFigPlaybackItem *playbackItem;
    struct OpaqueFigAsset *figAsset;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    long long status;
    NSError *error;
    long long priority;
    NSURL *URL;
    NSURL *destinationURL;
    unsigned long long downloadToken;
    NSNumber *cachePrimingDownloadTokenNum;
    AVURLAsset *asset;
    struct CMBaseObject *assetDownloader;
}

@end

