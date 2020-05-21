//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "TBTile.h"

@class NSDate, NSString;

@interface TBFetchedTile : NSObject <TBTile, NSCopying>
{
    unsigned long long _key;
    NSString *_etag;
    NSDate *_created;
}

+ (id)fetchedTileWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *created; // @synthesize created=_created;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
@property(readonly, copy) NSString *description;
- (BOOL)_isEqualToFetchedTile:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(unsigned long long)arg1 etag:(id)arg2 created:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

