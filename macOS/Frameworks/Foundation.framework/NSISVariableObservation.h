//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSISVariable;

__attribute__((visibility("hidden")))
@interface NSISVariableObservation : NSObject
{
    NSISVariable *_variable;
    double _lastValue;
    BOOL _valueIsDirtied;
}

- (void)emitValueIfNeededWithEngine:(id)arg1;
- (void)valueWasDirtied;
- (void)dealloc;
- (id)initWithVariable:(id)arg1;

@end

