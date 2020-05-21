//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString;

@interface APLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (id)sharedUIServiceConfig;
+ (id)sharedPluginConfig;
+ (id)sharedSettingsConfig;
+ (id)sharedFrameworkConfig;
+ (id)sharedExtensionConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedConfig;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property(retain) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property(copy) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(copy) NSString *category; // @synthesize category=_category;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly) NSObject<OS_os_log> *OSLogObject;
- (id)init;

@end

