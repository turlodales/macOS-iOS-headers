//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait
{
    NSArray *_items;
    NSArray *_negativeItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *negativeItems; // @synthesize negativeItems=_negativeItems;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)debugDescription;
- (BOOL)isActive;
- (id)initWithItems:(id)arg1 negativeItems:(id)arg2;
- (id)initWithItems:(id)arg1;

@end

