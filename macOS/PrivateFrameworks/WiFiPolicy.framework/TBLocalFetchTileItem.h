//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBFetchResponseTileItem.h"

@class NSError, NSSet, NSString;

@interface TBLocalFetchTileItem : NSObject <TBFetchResponseTileItem>
{
    NSError *_error;
    NSSet *_networks;
    unsigned long long _status;
    id <TBTile> _tile;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <TBTile> tile; // @synthesize tile=_tile;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSSet *networks; // @synthesize networks=_networks;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithTile:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

