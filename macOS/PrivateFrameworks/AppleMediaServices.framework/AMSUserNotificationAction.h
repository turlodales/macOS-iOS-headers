//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSMetricsEvent, NSDictionary, NSString, NSURL, NSURLRequest;

@interface AMSUserNotificationAction : NSObject
{
    NSString *_identifier;
    NSURL *_defaultURL;
    NSString *_title;
    NSURLRequest *_request;
    AMSMetricsEvent *_metricsEvent;
    NSDictionary *_userInfo;
    long long _style;
}

- (void).cxx_destruct;
@property long long style; // @synthesize style=_style;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSURL *defaultURL; // @synthesize defaultURL=_defaultURL;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) unsigned long long un_ActionOptions;
- (id)generateUserInfoAction;
- (id)initWithUserInfoAction:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

