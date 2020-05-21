//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSAudioZeroFilter : NSObject
{
    struct unique_ptr<CSAudioZeroFilterImpl<float>, std::__1::default_delete<CSAudioZeroFilterImpl<float>>> _audioZeroFilterImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)metrics;
- (unsigned long long)endAudioAndFetchAnyTrailingZerosPacket:(id *)arg1;
- (unsigned long long)filterZerosInAudioPacket:(id)arg1 atBufferHostTime:(unsigned long long)arg2 filteredPacket:(id *)arg3;
- (id)initWithZeroWindowSize:(unsigned long long)arg1 approxAbsSpeechThreshold:(float)arg2 numHostTicksPerAudioSample:(double)arg3;

@end

