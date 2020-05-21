//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPItem, FPItemCollection, NSError;

@protocol FPItemCollectionMinimalDelegate <NSObject>
- (void)dataForCollectionShouldBeReloaded:(FPItemCollection *)arg1;

@optional
- (void)collectionDidFinishGathering:(FPItemCollection *)arg1;
- (void)collection:(FPItemCollection *)arg1 didUpdateObservedItem:(FPItem *)arg2;
- (void)collection:(FPItemCollection *)arg1 didEncounterError:(NSError *)arg2;
@end

