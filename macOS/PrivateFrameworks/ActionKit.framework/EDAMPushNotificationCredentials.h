//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSData, NSString;

@interface EDAMPushNotificationCredentials : FATObject
{
    NSData *_iosDeviceToken;
    NSString *_gcmRegistrationId;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *gcmRegistrationId; // @synthesize gcmRegistrationId=_gcmRegistrationId;
@property(retain, nonatomic) NSData *iosDeviceToken; // @synthesize iosDeviceToken=_iosDeviceToken;

@end

