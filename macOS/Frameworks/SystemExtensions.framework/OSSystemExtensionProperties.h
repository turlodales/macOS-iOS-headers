//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface OSSystemExtensionProperties : NSObject <NSSecureCoding>
{
    NSURL *_URL;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 version:(id)arg3 shortVersion:(id)arg4;

@end

