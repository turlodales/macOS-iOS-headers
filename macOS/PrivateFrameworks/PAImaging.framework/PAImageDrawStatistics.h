//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PAImaging/PAImageDrawStatItem.h>

@class NSArray, NSMutableArray;

@interface PAImageDrawStatistics : PAImageDrawStatItem
{
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (double)sharpness;
- (void)addItem:(id)arg1;
- (id)description;
- (id)init;

@end

