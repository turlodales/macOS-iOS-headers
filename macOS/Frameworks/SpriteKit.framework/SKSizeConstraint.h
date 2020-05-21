//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKConstraint.h>

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKSizeConstraint : SKConstraint
{
    SKRange *_widthRange;
    SKRange *_heightRange;
}

+ (id)constraintWithHeightRange:(id)arg1;
+ (id)constraintWithWidthRange:(id)arg1;
+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) SKRange *heightRange; // @synthesize heightRange=_heightRange;
@property(copy) SKRange *widthRange; // @synthesize widthRange=_widthRange;
- (BOOL)isEqualToSizeConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;

@end

