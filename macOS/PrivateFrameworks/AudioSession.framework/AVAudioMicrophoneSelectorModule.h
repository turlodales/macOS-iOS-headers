//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioMicrophoneSelecting.h"

@class AVAudioMicrophoneConfiguration, NSArray, NSString;

@interface AVAudioMicrophoneSelectorModule : NSObject <AVAudioMicrophoneSelecting>
{
}

- (BOOL)setConfiguration:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) AVAudioMicrophoneConfiguration *selectedConfiguration;
@property(readonly, nonatomic) NSArray *availableConfigurations;
- (BOOL)enable:(BOOL)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

