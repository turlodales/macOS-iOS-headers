//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate;

@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding>
{
    NSDate *_earliestCreationDate;
    NSDate *_latestCreationDate;
    NSDate *_latestTombstoneDate;
    long long _version;
}

+ (BOOL)supportsSecureCoding;
+ (id)baseBookmarkWithVersion:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSDate *latestTombstoneDate; // @synthesize latestTombstoneDate=_latestTombstoneDate;
@property(readonly, copy, nonatomic) NSDate *latestCreationDate; // @synthesize latestCreationDate=_latestCreationDate;
@property(readonly, copy, nonatomic) NSDate *earliestCreationDate; // @synthesize earliestCreationDate=_earliestCreationDate;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)updatedBookmarkWithLatestTombstoneDate:(id)arg1;
- (id)updatedBookmarkWithLatestCreationDate:(id)arg1;
- (id)updatedBookmarkWithEarliestCreationDate:(id)arg1;
- (id)initWithEarliestCreationDate:(id)arg1 latestCreationDate:(id)arg2 latestTombstoneDate:(id)arg3 version:(long long)arg4;

@end

