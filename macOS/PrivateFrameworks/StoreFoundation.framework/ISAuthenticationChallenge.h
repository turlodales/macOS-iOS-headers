//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject
{
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

- (void).cxx_destruct;
@property(retain) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property(readonly) BOOL userNameIsEmail;
@property(readonly) BOOL userNameIsEditable;
- (void)useCredential:(id)arg1;
@property(readonly) NSString *user;
@property(readonly) __weak id <NSURLAuthenticationChallengeSender> sender;
@property(readonly) NSString *password;
@property(readonly) BOOL hasPassword;
@property(readonly) long long failureCount;
- (void)cancelAuthentication;

@end

