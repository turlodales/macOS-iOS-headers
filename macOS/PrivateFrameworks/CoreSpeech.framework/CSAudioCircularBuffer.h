//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSAudioCircularBuffer : NSObject
{
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<float>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<float>>> _csAudioCircularBufferImpl;
    unsigned long long _bufferLength;
}

+ (id)createAudioCircularBufferWithDefaultSettings;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long bufferLength; // @synthesize bufferLength=_bufferLength;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
- (unsigned long long)sampleCount;
- (void)reset;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long *)arg1;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)copySamplesFromHostTime:(unsigned long long)arg1;
- (void)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3;
- (void)addSamples:(const void *)arg1 numSamples:(unsigned long long)arg2;
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3;

@end

