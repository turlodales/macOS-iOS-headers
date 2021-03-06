//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, NSString;

@interface GEOProxyClient : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    GEOApplicationAuditToken *_auditToken;
    BOOL _isApplication;
}

+ (id)compositeClientForClients:(id)arg1;
+ (id)currentClient;
- (void).cxx_destruct;
@property(nonatomic) BOOL isApplication; // @synthesize isApplication=_isApplication;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)URLConnectionProperties;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithAuditToken:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end

