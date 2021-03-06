//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioDSPManager/AVAudioMicrophoneConfiguration-Protocol.h>

@class AVAudioFormat, NSString;

__attribute__((visibility("hidden")))
@interface MicrophoneConfiguration : NSObject <AVAudioMicrophoneConfiguration>
{
    NSString *_name;
    NSString *_location;
    NSString *_orientation;
    NSString *_polarPattern;
    AVAudioFormat *_format;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAudioFormat *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *polarPattern; // @synthesize polarPattern=_polarPattern;
@property(retain, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 location:(id)arg2 orientation:(id)arg3 polarPattern:(id)arg4 channelCount:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

