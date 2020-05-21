//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "_NSCollectionLayoutAPIRespresenting.h"

@class _NSCollectionLayoutSpacing;

@interface _NSCollectionLayoutEdgeSpacing : NSObject <NSCopying, _NSCollectionLayoutAPIRespresenting>
{
    _NSCollectionLayoutSpacing *_leading;
    _NSCollectionLayoutSpacing *_top;
    _NSCollectionLayoutSpacing *_trailing;
    _NSCollectionLayoutSpacing *_bottom;
}

+ (id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;
+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;
+ (id)defaultSpacing;
- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _NSCollectionLayoutSpacing *bottom;
@property(readonly, nonatomic) _NSCollectionLayoutSpacing *trailing;
@property(readonly, nonatomic) _NSCollectionLayoutSpacing *top;
@property(readonly, nonatomic) _NSCollectionLayoutSpacing *leading;
- (id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;

@end

