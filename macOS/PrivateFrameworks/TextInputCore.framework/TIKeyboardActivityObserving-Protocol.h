//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class TIKeyboardActivityContext;

@protocol TIKeyboardActivityObserving <NSObject>
- (void)keyboardActivityDidTransition:(TIKeyboardActivityContext *)arg1;

@optional
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
@end

