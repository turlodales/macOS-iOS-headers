//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssetCacheServicesExtensions/AssetCacheAlert.h>

@class NSArray;

@interface AssetCacheParentCycleAlert : AssetCacheAlert
{
    NSArray *_addresses;
}

- (void).cxx_destruct;
@property(retain) NSArray *addresses; // @synthesize addresses=_addresses;
- (id)sharingPrefsAnchor;
- (id)verboseText;
- (id)externalRepresentation;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithAddresses:(id)arg1;

@end

