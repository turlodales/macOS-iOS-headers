//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PLHighlightHierarchy : NSObject
{
    NSMutableSet *_moments;
    NSMutableSet *_dayHighlights;
    NSMutableSet *_dayGroupHighlights;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *dayGroupHighlights; // @synthesize dayGroupHighlights=_dayGroupHighlights;
@property(readonly, nonatomic) NSMutableSet *dayHighlights; // @synthesize dayHighlights=_dayHighlights;
@property(readonly, nonatomic) NSMutableSet *moments; // @synthesize moments=_moments;
- (void)addDayGroupHighlight:(id)arg1;
- (void)_addDayHighlight:(id)arg1;
- (void)addDayHighlight:(id)arg1;
- (void)_addMoment:(id)arg1;
- (void)addMoment:(id)arg1;
- (id)init;

@end

