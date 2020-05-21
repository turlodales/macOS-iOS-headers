//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "_NSCollectionLayoutAPIRespresenting.h"

@class NSArray, NSString, _NSCollectionLayoutEdgeSpacing, _NSCollectionLayoutSize;

@interface _NSCollectionLayoutItem : NSObject <NSCopying, _NSCollectionLayoutAPIRespresenting>
{
    NSArray *_supplementaryItems;
    NSArray *_decorationItems;
    _NSCollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
    _NSCollectionLayoutSize *_size;
    struct NSDirectionalEdgeInsets _contentInsets;
}

+ (id)itemWithSize:(id)arg1 decorationItems:(id)arg2;
+ (id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2;
+ (id)itemWithSize:(id)arg1;
+ (id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) _NSCollectionLayoutSize *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) _NSCollectionLayoutEdgeSpacing *edgeSpacing; // @synthesize edgeSpacing=_edgeSpacing;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3 contentInsets:(struct NSDirectionalEdgeInsets)arg4 edgeSpacing:(id)arg5 name:(id)arg6;

@end

