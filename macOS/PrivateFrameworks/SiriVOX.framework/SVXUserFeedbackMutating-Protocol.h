//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSString, SVXUserFeedbackAudioContent, SVXUserFeedbackVoiceContent;

@protocol SVXUserFeedbackMutating <NSObject>
- (void)setVoiceContent:(SVXUserFeedbackVoiceContent *)arg1;
- (void)setAudioContent:(SVXUserFeedbackAudioContent *)arg1;
- (void)setContentType:(long long)arg1;
- (void)setIdentifier:(NSString *)arg1;
@end

