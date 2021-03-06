//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMUserNameAndPasswordCredentialsDeclaration : CEMPayloadBase
{
    NSString *_payloadUserName;
    NSString *_payloadPassword;
}

+ (id)buildRequiredOnlyWithUserName:(id)arg1 withPassword:(id)arg2;
+ (id)buildWithUserName:(id)arg1 withPassword:(id)arg2;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadUserName; // @synthesize payloadUserName=_payloadUserName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

