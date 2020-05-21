//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import "SAAceSerializable.h"

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand <SAAceSerializable>
{
}

+ (id)getAppMatchesForIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAppMatchesForIntent;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *protoEncodedIntent;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(copy, nonatomic) NSArray *candidateBundleIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

