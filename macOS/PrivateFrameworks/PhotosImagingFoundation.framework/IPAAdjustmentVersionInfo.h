//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject <NSCopying>
{
    NSString *_platform;
    NSString *_buildNumber;
    NSString *_appVersion;
    long long _schemaRevision;
}

+ (id)versionInfoFromArchivalRepresentation:(id)arg1;
+ (id)_frameworkVersion;
+ (id)frameworkVersion;
+ (id)_systemVersionPlistPath;
+ (id)_systemBuildVersion;
+ (id)systemBuildVersion;
+ (id)currentVersionInfo;
- (void).cxx_destruct;
@property(nonatomic) long long schemaRevision; // @synthesize schemaRevision=_schemaRevision;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (BOOL)isEqualToVersionInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)archivalRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

