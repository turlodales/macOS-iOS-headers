//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Quartz/QLScaleWindowEffect.h>

@interface PKScaleWindowEffect : QLScaleWindowEffect
{
    CDUnknownFunctionPointerType _function;
    QLScaleWindowEffect *_nextEffect;
    double _nextEffectDelay;
}

- (void).cxx_destruct;
@property double nextEffectDelay; // @synthesize nextEffectDelay=_nextEffectDelay;
@property(retain) QLScaleWindowEffect *nextEffect; // @synthesize nextEffect=_nextEffect;
- (void)done;
- (float)animation:(id)arg1 valueForProgress:(float)arg2;
- (void)setEaseFunction:(CDUnknownFunctionPointerType)arg1;

@end

