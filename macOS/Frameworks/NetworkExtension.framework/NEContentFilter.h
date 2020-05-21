//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    BOOL _enabled;
    BOOL _enableManualMode;
    NEFilterProviderConfiguration *_provider;
    long long _grade;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL enableManualMode; // @synthesize enableManualMode=_enableManualMode;
@property(nonatomic) long long grade; // @synthesize grade=_grade;
@property(copy) NEFilterProviderConfiguration *provider; // @synthesize provider=_provider;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

