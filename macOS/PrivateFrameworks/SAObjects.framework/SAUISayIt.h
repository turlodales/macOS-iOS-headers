//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SAUIAudioData;

@interface SAUISayIt : SABaseClientBoundCommand
{
}

+ (id)sayItWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sayIt;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL repeatable;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSNumber *listenAfterSpeaking;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *gender;
@property(copy, nonatomic) NSString *dialogIdentifier;
@property(retain, nonatomic) id <SAAceSerializable> context;
@property(nonatomic) BOOL canUseServerTTS;
@property(copy, nonatomic) NSString *audioDataUrl;
@property(retain, nonatomic) SAUIAudioData *audioData;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

