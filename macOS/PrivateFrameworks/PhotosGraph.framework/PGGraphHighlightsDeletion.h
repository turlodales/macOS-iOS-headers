//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphChange.h>

@class NSSet;

@interface PGGraphHighlightsDeletion : PGGraphChange
{
    NSSet *_highlightLocalIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *highlightLocalIdentifiers; // @synthesize highlightLocalIdentifiers=_highlightLocalIdentifiers;
- (id)description;
- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)initWithHighlightLocalIdentifiers:(id)arg1;

@end

