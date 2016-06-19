//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSString;

@interface NEFilterProviderConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _filterBrowsers;
    BOOL _filterSockets;
    BOOL _controlProviderInitialized;
    NSDictionary *_vendorConfiguration;
    NSString *_serverAddress;
    NSString *_username;
    NSString *_organization;
    NSData *_passwordReference;
    NSData *_identityReference;
    NSString *_pluginType;
    NSString *_keychainAccessGroup;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSString *keychainAccessGroup; // @synthesize keychainAccessGroup=_keychainAccessGroup;
@property BOOL controlProviderInitialized; // @synthesize controlProviderInitialized=_controlProviderInitialized;
@property(retain) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(copy) NSData *identityReference; // @synthesize identityReference=_identityReference;
@property(copy) NSData *passwordReference; // @synthesize passwordReference=_passwordReference;
@property(copy) NSString *organization; // @synthesize organization=_organization;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
@property(copy) NSDictionary *vendorConfiguration; // @synthesize vendorConfiguration=_vendorConfiguration;
@property BOOL filterSockets; // @synthesize filterSockets=_filterSockets;
@property BOOL filterBrowsers; // @synthesize filterBrowsers=_filterBrowsers;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)optionsDict;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

