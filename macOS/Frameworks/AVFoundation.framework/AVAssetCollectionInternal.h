//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetCollectionInspectorLoader, AVWeakReference, NSObject<OS_dispatch_queue>, NSURL;

@interface AVAssetCollectionInternal : NSObject
{
    NSURL *rootURL;
    NSObject<OS_dispatch_queue> *inspectorQ;
    AVAssetCollectionInspectorLoader *inspectorLoader;
    AVWeakReference *weakReference;
}

@end

