//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NEDNSProxyProviderProtocol : NEVPNProtocol
{
    NSDictionary *_providerConfiguration;
    NSString *_providerBundleIdentifier;
    NSString *_pluginType;
    NSString *_designatedRequirement;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *designatedRequirement; // @synthesize designatedRequirement=_designatedRequirement;
@property(copy) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(copy) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property(copy) NSDictionary *providerConfiguration; // @synthesize providerConfiguration=_providerConfiguration;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (id)init;

@end

