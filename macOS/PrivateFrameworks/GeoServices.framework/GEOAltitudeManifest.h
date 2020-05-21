//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"
#import "NSXMLParserDelegate.h"

@class GEOAltitudeManifestReserved, NSString;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver>
{
    GEOAltitudeManifestReserved *_reserved;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parseManifest:(id)arg1;
- (id)availableRegions;
- (id)tripIdsForRegion:(unsigned int)arg1;
- (id)tourIdsForRegion:(unsigned int)arg1;
- (id)nameForRegion:(unsigned int)arg1;
- (unsigned int)dataVersionForRegion:(unsigned int)arg1;
- (BOOL)hasDataVersionForRegion:(unsigned int)arg1;
- (unsigned int)versionForRegion:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)isValidTourId:(unsigned long long)arg1;
- (BOOL)parseXml:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_reloadManifest;
- (void)commonInit;
- (id)initWithoutObserver;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

