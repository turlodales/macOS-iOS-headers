//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SACFAbstractClientCommand.h>

@class NSString, SAAppInfo;

@interface SACFSpokenNotificationFlowCommand : SACFAbstractClientCommand
{
}

+ (id)spokenNotificationFlowCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)spokenNotificationFlowCommand;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *userInterfaceIdiom;
@property(copy, nonatomic) NSString *userAgent;
@property(nonatomic) BOOL shouldPromptUser;
@property(copy, nonatomic) NSString *outputVoiceLanguageCode;
@property(copy, nonatomic) NSString *notificationID;
@property(copy, nonatomic) NSString *languageCode;
@property(retain, nonatomic) SAAppInfo *appInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

