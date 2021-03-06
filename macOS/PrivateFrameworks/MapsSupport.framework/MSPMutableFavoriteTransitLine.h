//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPMutableFavorite.h>

#import <MapsSupport/MSPFavoriteTransitLine-Protocol.h>

@class MSPTransitLineBookmark, NSString, NSUUID;
@protocol GEOTransitLine;

@interface MSPMutableFavoriteTransitLine : MSPMutableFavorite <MSPFavoriteTransitLine>
{
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (BOOL)isUserVisibleDuplicateOfFavorite:(id)arg1;
@property(retain, nonatomic) id <GEOTransitLine> transitLine;
@property(readonly, nonatomic) MSPTransitLineBookmark *transitLineBookmark;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)initWithBookmarkStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *storageIdentifier;
@property(readonly) Class superclass;

@end

