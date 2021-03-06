//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVContentKeyReportGroup, AVWeakReference, AVWeakReferencingDelegateStorage, NSData, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVContentKeySessionInternal : NSObject
{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReference *_weakReference;
    NSURL *_storageURL;
    NSData *_appIdentifier;
    BOOL _isExpired;
    BOOL _internal;
    AVContentKeyReportGroup *_defaultContentKeyGroup;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    NSHashTable *_contentKeyRecipients;
    NSString *_keySystem;
    NSMutableDictionary *keyRequestsByRequestID;
    NSMutableArray *_contentKeyGroups;
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@end

