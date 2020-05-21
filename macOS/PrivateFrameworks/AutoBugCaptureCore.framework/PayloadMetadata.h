//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface PayloadMetadata : NSObject
{
    BOOL _requiresUserConsent;
    short _payloadPreflightStatus;
    NSString *_token;
    long long _radarID;
    long long _urgency;
    unsigned long long _apnsIdentifier;
    unsigned long long _userConsentState;
    NSString *_caseID;
    double _caseTimestamp;
    NSMutableArray *_attachmentFileInfos;
    NSDate *_receivedTime;
}

+ (BOOL)uploadRequiresConsent:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) short payloadPreflightStatus; // @synthesize payloadPreflightStatus=_payloadPreflightStatus;
@property(retain, nonatomic) NSDate *receivedTime; // @synthesize receivedTime=_receivedTime;
@property(readonly, nonatomic) NSMutableArray *attachmentFileInfos; // @synthesize attachmentFileInfos=_attachmentFileInfos;
@property(readonly, nonatomic) double caseTimestamp; // @synthesize caseTimestamp=_caseTimestamp;
@property(readonly, nonatomic) NSString *caseID; // @synthesize caseID=_caseID;
@property(readonly, nonatomic) unsigned long long userConsentState; // @synthesize userConsentState=_userConsentState;
@property(readonly, nonatomic) BOOL requiresUserConsent; // @synthesize requiresUserConsent=_requiresUserConsent;
@property(nonatomic) unsigned long long apnsIdentifier; // @synthesize apnsIdentifier=_apnsIdentifier;
@property(nonatomic) long long urgency; // @synthesize urgency=_urgency;
@property(nonatomic) long long radarID; // @synthesize radarID=_radarID;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void)requestUserConsent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)validateAttachmentFiles;
- (long long)compare:(id)arg1;
- (id)initWithCaseIdentifier:(id)arg1;

@end

