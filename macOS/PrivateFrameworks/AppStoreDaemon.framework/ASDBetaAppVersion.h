//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface ASDBetaAppVersion : NSObject <NSSecureCoding>
{
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_shortVersion;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(readonly) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

