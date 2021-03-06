//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ACDEClient/ACMHTTPHandler.h>

@class NSDate, NSString;

@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler
{
    NSString *_policyVersion;
    NSDate *_startInvocationDate;
    NSString *_realm;
}

@property(readonly, nonatomic) NSString *realm; // @synthesize realm=_realm;
- (BOOL)shouldReturnResponse:(id)arg1 orReportError:(id *)arg2;
- (BOOL)shouldValidateTGTs;
- (id)requestBody;
@property(readonly, nonatomic) NSString *policyVersion;
- (id)initWithContext:(id)arg1;

@end

