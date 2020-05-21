//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConditionInducer/COCondition.h>

@class NSDictionary, NSString, SlowNetworkUtil;

@interface SlowNetworkCondition : COCondition
{
    BOOL _running;
    SlowNetworkUtil *_util;
    NSString *_profile;
    NSDictionary *_profileData;
}

+ (id)description;
+ (id)descriptionWithProfileParamsForProfile:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *profileData; // @synthesize profileData=_profileData;
@property(retain, nonatomic) NSString *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) SlowNetworkUtil *util; // @synthesize util=_util;
@property(nonatomic) BOOL running; // @synthesize running=_running;
- (BOOL)active;
- (void)tearDown;
- (BOOL)setUp;
- (BOOL)isNLCPrefPaneActive;
- (id)initWithProfile:(id)arg1;
- (BOOL)isInternalOnly;
- (BOOL)isDestructive;
- (id)userFriendlyName;
- (id)identifierName;

@end

