//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSiriRequest.h"

@class NSDictionary, NSString;

@interface STGenericIntentRequest : AFSiriRequest
{
    NSString *_appIdentifier;
    NSString *_intentString;
    NSString *_utterance;
    NSDictionary *_info;
    BOOL __launchToForeground;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setLaunchToForeground:) BOOL _launchToForeground; // @synthesize _launchToForeground=__launchToForeground;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_makeAppFrontmost;
- (BOOL)isForegroundLaunch;
- (id)responseWithCode:(long long)arg1;
- (id)info;
- (id)utterance;
- (id)intentString;
- (id)appIdentifier;
- (id)initWithAppIdentifier:(id)arg1 intentString:(id)arg2 utterance:(id)arg3 info:(id)arg4;
- (id)_af_analyticsContextDescription;

@end

