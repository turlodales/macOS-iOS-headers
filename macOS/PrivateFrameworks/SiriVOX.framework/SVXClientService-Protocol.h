//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class SVXActivationContext, SVXDeactivationContext, SVXDeviceSetupContext, SVXSpeechSynthesisRequest;

@protocol SVXClientService <NSObject>
- (oneway void)prepareForDeviceSetupWithContext:(SVXDeviceSetupContext *)arg1 completion:(void (^)(SVXDeviceSetupFlow *, NSError *))arg2;
- (oneway void)setDeviceSetupContext:(SVXDeviceSetupContext *)arg1;
- (oneway void)stopSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1;
- (oneway void)cancelPendingSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1;
- (oneway void)enqueueSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1 completion:(void (^)(SVXSpeechSynthesisResult *))arg2;
- (oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(void (^)(AFXPCWrapper *, NSError *))arg2;
- (oneway void)transitToAutomaticEndpointing;
- (oneway void)performManualEndpointing;
- (oneway void)deactivateWithContext:(SVXDeactivationContext *)arg1 completion:(void (^)(void))arg2;
- (oneway void)activateWithContext:(SVXActivationContext *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)prewarmWithContext:(SVXActivationContext *)arg1 completion:(void (^)(void))arg2;
- (oneway void)preheatWithActivationSource:(long long)arg1;
- (oneway void)fetchSessionActivityStateWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (oneway void)fetchSessionStateWithCompletion:(void (^)(long long, NSError *))arg1;
- (oneway void)pingWithReply:(void (^)(NSError *))arg1;
@end

