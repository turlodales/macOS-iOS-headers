//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMAuthenticationParameters : FATObject
{
    NSString *_usernameOrEmail;
    NSString *_password;
    NSString *_ssoLoginToken;
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_deviceIdentifier;
    NSString *_deviceDescription;
    NSNumber *_supportsTwoFactor;
    NSNumber *_supportsBusinessOnlyAccounts;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *supportsBusinessOnlyAccounts; // @synthesize supportsBusinessOnlyAccounts=_supportsBusinessOnlyAccounts;
@property(retain, nonatomic) NSNumber *supportsTwoFactor; // @synthesize supportsTwoFactor=_supportsTwoFactor;
@property(retain, nonatomic) NSString *deviceDescription; // @synthesize deviceDescription=_deviceDescription;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(retain, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(retain, nonatomic) NSString *ssoLoginToken; // @synthesize ssoLoginToken=_ssoLoginToken;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *usernameOrEmail; // @synthesize usernameOrEmail=_usernameOrEmail;

@end

