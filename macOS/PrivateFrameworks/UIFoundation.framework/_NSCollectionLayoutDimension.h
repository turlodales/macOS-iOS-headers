//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "_NSCollectionLayoutAPIRespresenting.h"

@interface _NSCollectionLayoutDimension : NSObject <NSCopying, _NSCollectionLayoutAPIRespresenting>
{
    long long _semantic;
    double _dimension;
}

+ (id)estimated:(double)arg1;
+ (id)absolute:(double)arg1;
+ (id)fractionalHeight:(double)arg1;
+ (id)fractionalWidth:(double)arg1;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isFractionalHeight;
@property(readonly, nonatomic) BOOL isFractionalWidth;
@property(readonly, nonatomic) BOOL isEstimated;
@property(readonly, nonatomic) BOOL isAbsolute;
@property(readonly, nonatomic) double dimension;
- (id)initWithSemantic:(long long)arg1 dimension:(double)arg2;

@end

