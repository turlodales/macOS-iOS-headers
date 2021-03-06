//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOTileDBWriteOperation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOTileDBUpdateAccessTimeOperation : NSObject <_GEOTileDBWriteOperation>
{
    struct _GEOTileKey _key;
    double _timestamp;
}

- (id)dataForKey:(const struct _GEOTileKey *)arg1 ETag:(id *)arg2 originalLoadReason:(unsigned char *)arg3 isKnownNotToExist:(char *)arg4;
- (BOOL)isSupercededByOperation:(id)arg1;
- (void)performWithDB:(id)arg1;
- (BOOL)canIncreaseDataSizeInDB;
@property(readonly, nonatomic) unsigned long long sizeInBytes;
@property(readonly, nonatomic) struct _GEOTileKey *key;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 timestamp:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

