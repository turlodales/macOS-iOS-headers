/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
 */

@interface GetVolumeLevelIntentResponse : INIntentResponse {
    long long  _code;
}

@property (nonatomic) long long code;
@property (nonatomic, copy) NSNumber *currentVolumeLevel;

- (long long)code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)setCode:(long long)arg1;

@end
