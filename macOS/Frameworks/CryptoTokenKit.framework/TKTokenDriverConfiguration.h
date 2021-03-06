//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TKTokenConfigurationConnection;

@interface TKTokenDriverConfiguration : NSObject
{
    TKTokenConfigurationConnection *_configurationConnection;
    NSString *_classID;
}

+ (id)driverConfigurations;
+ (id)driverConfigurationsWithClient:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *classID; // @synthesize classID=_classID;
- (void)removeTokenConfigurationForTokenInstanceID:(id)arg1;
- (id)createTokenConfigurationWithInstanceID:(id)arg1 persistent:(BOOL)arg2;
- (id)addTokenConfigurationForTokenInstanceID:(id)arg1;
- (id)beginTransaction;
@property(readonly, copy, nonatomic) NSDictionary *tokenConfigurations;
- (id)initWithClassID:(id)arg1 configurationConnection:(id)arg2;

@end

