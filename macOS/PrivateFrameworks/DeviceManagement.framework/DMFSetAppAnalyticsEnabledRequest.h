//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetAppAnalyticsEnabledRequest : DMFTaskRequest
{
    BOOL _enabled;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

