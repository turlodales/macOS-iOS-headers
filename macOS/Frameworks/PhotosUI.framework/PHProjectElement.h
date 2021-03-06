//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@interface PHProjectElement : NSObject <NSSecureCoding>
{
    double _weight;
    struct CGRect _placement;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) struct CGRect placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)description:(BOOL)arg1;
- (id)descriptionStart:(BOOL)arg1;
- (id)initWithWeight:(id)arg1 placement:(struct CGRect)arg2;

@end

