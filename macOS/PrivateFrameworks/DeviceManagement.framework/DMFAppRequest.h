//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSNumber, NSString, NSURL;

@interface DMFAppRequest : DMFTaskRequest
{
    NSString *_bundleIdentifier;
    NSNumber *_storeItemIdentifier;
    NSURL *_manifestURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *manifestURL; // @synthesize manifestURL=_manifestURL;
@property(copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

