//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject <NSCopying, NSCoding>
{
    NSLayoutXAxisAnchor *_xAxisAnchor;
    NSLayoutYAxisAnchor *_yAxisAnchor;
}

+ (id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
+ (id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
@property(readonly, copy) NSLayoutYAxisAnchor *yAxisAnchor; // @synthesize yAxisAnchor=_yAxisAnchor;
@property(readonly, copy) NSLayoutXAxisAnchor *xAxisAnchor; // @synthesize xAxisAnchor=_xAxisAnchor;
- (id)constraintsEqualToPoint:(id)arg1;
- (id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (id)constraintsEqualToLayoutPoint:(id)arg1;
- (id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
- (struct CGPoint)valueInItem:(id)arg1;
- (id)relationshipEqualToLayoutPoint:(id)arg1;

@end

