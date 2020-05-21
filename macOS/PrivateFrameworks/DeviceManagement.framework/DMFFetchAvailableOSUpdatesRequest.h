//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest
{
    BOOL _useDelay;
    NSString *_productVersion;
}

+ (Class)whitelistedClassForResultObject;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
- (void).cxx_destruct;
@property(nonatomic) BOOL useDelay; // @synthesize useDelay=_useDelay;
@property(copy, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

