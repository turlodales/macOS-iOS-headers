//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface NEVPNAppRuleExecutable : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_matchSigningIdentifier;
    NSString *_matchDesignatedRequirement;
    NSString *_matchPath;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *matchPath; // @synthesize matchPath=_matchPath;
@property(readonly) NSString *matchDesignatedRequirement; // @synthesize matchDesignatedRequirement=_matchDesignatedRequirement;
@property(readonly) NSString *matchSigningIdentifier; // @synthesize matchSigningIdentifier=_matchSigningIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

