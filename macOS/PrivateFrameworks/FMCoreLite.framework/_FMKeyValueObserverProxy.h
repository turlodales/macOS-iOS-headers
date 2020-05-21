//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FMCoreLite/_FMObserverProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMKeyValueObserverProxy : _FMObserverProxy
{
    BOOL _isObserving;
    CDUnknownBlockType _observerBlock;
    id _observedObject;
    NSString *_keyPath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak id observedObject; // @synthesize observedObject=_observedObject;
@property(readonly, copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 observerBlock:(CDUnknownBlockType)arg5;

@end

