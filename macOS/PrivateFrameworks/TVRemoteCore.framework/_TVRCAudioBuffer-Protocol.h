//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVRemoteCore/NSObject-Protocol.h>

@protocol _TVRCAudioBuffer <NSObject>
- (void)writePacketDescriptions:(void *)arg1 length:(unsigned long long)arg2;
- (void)writeAudioData:(void *)arg1 length:(unsigned long long)arg2;
- (void)setGain:(float)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setPacketCount:(unsigned long long)arg1;
@end

