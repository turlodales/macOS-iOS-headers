//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioCompressedBuffer, NSDictionary;

@interface MRAudioBuffer : NSObject
{
    AVAudioCompressedBuffer *_buffer;
    NSDictionary *_formatSettings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *formatSettings; // @synthesize formatSettings=_formatSettings;
@property(readonly, nonatomic) AVAudioCompressedBuffer *buffer; // @synthesize buffer=_buffer;
- (id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3;

@end

