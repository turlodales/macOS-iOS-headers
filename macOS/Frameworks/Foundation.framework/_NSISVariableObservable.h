//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObservationSource.h>

@class NSISEngine, NSISVariable;

__attribute__((visibility("hidden")))
@interface _NSISVariableObservable : NSObservationSource
{
    double _lastValue;
    NSISVariable *_variable;
    NSISEngine *_associatedEngine;
    unsigned int _hasLastValue:1;
    unsigned int _valueIsDirtied:1;
}

+ (id)observableForVariable:(id)arg1 inEngine:(id)arg2;
- (void)emitValueIfNeeded;
- (void)receiveObservedValue:(id)arg1;
- (void)dealloc;
- (id)initWithVariable:(id)arg1 inEngine:(id)arg2;

@end

