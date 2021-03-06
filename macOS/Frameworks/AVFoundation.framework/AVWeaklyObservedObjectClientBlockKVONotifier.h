//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVKVONotifier-Protocol.h>

@class AVCallbackContextRegistry, AVWeakReference, NSString;
@protocol AVWeakObservable;

__attribute__((visibility("hidden")))
@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier>
{
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    AVWeakReference *_weakReferenceToObject;
    NSObject<AVWeakObservable> *_unsafeUnretainedObject;
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
}

- (void)cancelCallbacks;
- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

