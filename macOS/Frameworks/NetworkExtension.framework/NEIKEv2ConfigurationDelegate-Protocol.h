//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEIKEv2ChildSAConfiguration, NEIKEv2Session, NEIKEv2SessionConfiguration;

@protocol NEIKEv2ConfigurationDelegate <NSObject>
- (void)sessionFailedBeforeRequestingConfiguration:(NEIKEv2Session *)arg1;
- (void)requestConfigurationForSession:(NEIKEv2Session *)arg1 sessionConfig:(NEIKEv2SessionConfiguration *)arg2 childConfig:(NEIKEv2ChildSAConfiguration *)arg3 validateAuthBlock:(BOOL (^)(NEIKEv2SessionConfiguration *))arg4 responseBlock:(void (^)(NEIKEv2SessionConfiguration *, NEIKEv2ChildSAConfiguration *, struct NEVirtualInterface_s *))arg5;
@end

