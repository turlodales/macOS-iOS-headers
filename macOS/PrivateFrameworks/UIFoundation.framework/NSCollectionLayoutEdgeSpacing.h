//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying>
{
    NSCollectionLayoutSpacing *_leading;
    NSCollectionLayoutSpacing *_top;
    NSCollectionLayoutSpacing *_trailing;
    NSCollectionLayoutSpacing *_bottom;
}

+ (id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;
+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;
+ (id)defaultSpacing;
- (void).cxx_destruct;
- (id)_spacingForEdge:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_hasSpacing;
@property(readonly) NSCollectionLayoutSpacing *bottom;
@property(readonly) NSCollectionLayoutSpacing *top;
@property(readonly) NSCollectionLayoutSpacing *trailing;
@property(readonly) NSCollectionLayoutSpacing *leading;
- (double)spacingForEdge:(unsigned long long)arg1;
- (BOOL)isSpacingFlexibleForEdge:(unsigned long long)arg1;
- (BOOL)isSpacingFixedForEdge:(unsigned long long)arg1;
- (struct NSDirectionalEdgeInsets)edgeOutsets;
- (id)description;
- (id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;

@end

