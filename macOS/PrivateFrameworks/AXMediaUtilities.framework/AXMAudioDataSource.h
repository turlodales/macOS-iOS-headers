//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AXMAudioDataSource : NSObject
{
    BOOL _circular;
    vector_3203cf93 *_sampleBuffer;
    unsigned long long _length;
    unsigned long long _currentSampleIndex;
    double _level;
    NSArray *_effectsChain;
    NSString *_name;
    double _sampleRate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *effectsChain; // @synthesize effectsChain=_effectsChain;
@property(nonatomic) double level; // @synthesize level=_level;
@property(nonatomic, getter=isCircular) BOOL circular; // @synthesize circular=_circular;
@property(nonatomic) unsigned long long currentSampleIndex; // @synthesize currentSampleIndex=_currentSampleIndex;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) vector_3203cf93 *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
- (void)normalizeAudio;
- (id)description;
- (void)processEffects:(unsigned long long)arg1;
- (void)removeEffectFromChain:(id)arg1;
- (void)addEffectToChain:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(BOOL)arg3;
- (id)init;

@end

