//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

