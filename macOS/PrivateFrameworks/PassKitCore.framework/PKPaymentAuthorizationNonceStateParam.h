//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam
{
    NSData *_credential;
    PKAuthenticatorEvaluationResponse *_evaluationResponse;
}

+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;
+ (id)paramWithCredential:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse; // @synthesize evaluationResponse=_evaluationResponse;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (id)description;

@end

