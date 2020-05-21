//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSString, NSURL;

@interface NSSecurityScopedURLWrapper : NSObject <NSSecureCoding>
{
    BOOL _readonly;
    BOOL _backedByFileProvider;
    NSData *_scope;
    NSURL *_url;
    NSString *_providerIdentifier;
    NSString *_domainIdentifier;
    NSString *_itemIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, getter=isBackedByFileProvider) BOOL backedByFileProvider; // @synthesize backedByFileProvider=_backedByFileProvider;
@property(readonly, getter=isReadonly) BOOL readonly; // @synthesize readonly=_readonly;
@property(readonly, copy) NSURL *url; // @synthesize url=_url;
@property(readonly) NSData *_scope; // @synthesize _scope;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 readonly:(BOOL)arg2 scope:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(BOOL)arg2 extensionClass:(id)arg3;
- (id)initWithURL:(id)arg1 readonly:(BOOL)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3;

@end

