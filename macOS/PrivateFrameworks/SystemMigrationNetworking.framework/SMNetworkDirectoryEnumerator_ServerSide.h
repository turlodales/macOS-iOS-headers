//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableSet, NSSet, NSString, NSURL;

@interface SMNetworkDirectoryEnumerator_ServerSide : NSObject
{
    BOOL _autoDetectBundles;
    BOOL _autoSizeBundles;
    BOOL _useTrueOnDiskSizes;
    BOOL _stopEnumeration;
    NSArray *_requestedProperties;
    NSSet *_dontDescendPaths;
    NSDictionary *_restartPoint;
    NSString *_compressionFormat;
    NSURL *_basePathURL;
    NSURL *_alternateBasePathURL;
    NSMutableSet *_hardlinkInodes;
    id _startingFilesystemIdentifier;
}

- (void).cxx_destruct;
@property(retain) id startingFilesystemIdentifier; // @synthesize startingFilesystemIdentifier=_startingFilesystemIdentifier;
@property(retain) NSMutableSet *hardlinkInodes; // @synthesize hardlinkInodes=_hardlinkInodes;
@property(retain) NSURL *alternateBasePathURL; // @synthesize alternateBasePathURL=_alternateBasePathURL;
@property(retain) NSURL *basePathURL; // @synthesize basePathURL=_basePathURL;
@property BOOL stopEnumeration; // @synthesize stopEnumeration=_stopEnumeration;
@property(retain) NSString *compressionFormat; // @synthesize compressionFormat=_compressionFormat;
@property(retain) NSDictionary *restartPoint; // @synthesize restartPoint=_restartPoint;
@property(retain) NSSet *dontDescendPaths; // @synthesize dontDescendPaths=_dontDescendPaths;
@property(retain) NSArray *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
@property BOOL useTrueOnDiskSizes; // @synthesize useTrueOnDiskSizes=_useTrueOnDiskSizes;
@property BOOL autoSizeBundles; // @synthesize autoSizeBundles=_autoSizeBundles;
@property BOOL autoDetectBundles; // @synthesize autoDetectBundles=_autoDetectBundles;
- (BOOL)enumerateToFileDescriptor:(int)arg1;
- (id)initWithDirectory:(id)arg1;

@end

