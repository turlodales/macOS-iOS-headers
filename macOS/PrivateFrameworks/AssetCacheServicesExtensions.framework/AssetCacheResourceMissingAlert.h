//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssetCacheServicesExtensions/AssetCacheAlert.h>

@class NSString;

@interface AssetCacheResourceMissingAlert : AssetCacheAlert
{
    NSString *_resource;
    NSString *_pathPreventingAccess;
}

- (void).cxx_destruct;
@property(retain) NSString *pathPreventingAccess; // @synthesize pathPreventingAccess=_pathPreventingAccess;
@property(retain) NSString *resource; // @synthesize resource=_resource;
- (id)sharingPrefsAnchor;
- (id)verboseText;
- (id)externalRepresentation;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithResource:(id)arg1 pathPreventingAccess:(id)arg2;

@end

