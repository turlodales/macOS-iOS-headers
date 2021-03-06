//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRE/MDLComponent-Protocol.h>
#import <CoreRE/NSFastEnumeration-Protocol.h>

@class MDLObject, NSArray;

@protocol MDLObjectContainerComponent <MDLComponent, NSFastEnumeration>
@property(readonly, retain, nonatomic) NSArray *objects;
@property(readonly) unsigned long long count;
- (MDLObject *)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeObject:(MDLObject *)arg1;
- (void)addObject:(MDLObject *)arg1;
@end

