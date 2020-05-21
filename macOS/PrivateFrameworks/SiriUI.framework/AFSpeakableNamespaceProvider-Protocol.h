//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFBulletin, AceObject, NSString, NSURL;

@protocol AFSpeakableNamespaceProvider <NSObject>
- (NSString *)stringForExpression:(NSString *)arg1;

@optional
- (NSURL *)attachmentURLForExpression:(NSString *)arg1;
- (void)setAssistantBulletin:(AFBulletin *)arg1;
- (NSString *)identifier;
- (id)initWithAceObject:(AceObject *)arg1;
- (NSString *)stringForExpression:(NSString *)arg1 containsPrivacySensitiveContents:(char *)arg2;
@end

