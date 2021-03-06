//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNObserver;

@interface _CNKeyValueObserverHandler : NSObject
{
    id _object;
    NSString *_keyPath;
    id <CNObserver> _observer;
}

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObservingWithOptions:(unsigned long long)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3;

@end

