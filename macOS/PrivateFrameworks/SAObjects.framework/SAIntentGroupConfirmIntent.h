//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupConfirmIntent : SABaseClientBoundCommand
{
}

+ (id)confirmIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)confirmIntent;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

