//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@class NSDictionary, NSIndexSet;

@interface PGCurationIndexSetTrait : PGCurationTrait
{
    NSIndexSet *_indexSet;
    NSDictionary *_thresholdByIdentifier;
    unsigned long long _targetNumberOfMatches;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long targetNumberOfMatches; // @synthesize targetNumberOfMatches=_targetNumberOfMatches;
@property(retain, nonatomic) NSDictionary *thresholdByIdentifier; // @synthesize thresholdByIdentifier=_thresholdByIdentifier;
@property(readonly, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
- (id)debugDescription;
- (id)niceDescription;
- (double)thresholdForSceneIdentifier:(unsigned int)arg1;
- (BOOL)isActive;
- (id)initWithIndexSet:(id)arg1;

@end

