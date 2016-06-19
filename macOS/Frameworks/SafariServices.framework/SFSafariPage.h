//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSExtensionContext, NSUUID;

@interface SFSafariPage : NSObject <NSSecureCoding>
{
    NSUUID *_uuid;
    NSExtensionContext *__extensionContext;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSExtensionContext *_extensionContext; // @synthesize _extensionContext=__extensionContext;
- (void).cxx_destruct;
- (void)getURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTitleWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getIsPrivateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getIsActiveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPagePropertiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reload;
- (void)dispatchMessageToScriptWithName:(id)arg1 userInfo:(id)arg2;
- (id)_remoteObjectProxy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSUUID *_uuid;
- (id)_initWithUUID:(id)arg1;

@end

