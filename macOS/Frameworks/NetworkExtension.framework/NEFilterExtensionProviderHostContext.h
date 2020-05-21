//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEExtensionProviderHostContext.h>

#import "NEFilterExtensionProviderHostProtocol.h"
#import "NEFilterExtensionProviderProtocol.h"

@class NSString;

@interface NEFilterExtensionProviderHostContext : NEExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

