//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKCandidate, IMKUITriCandidateLayout, NSArray;

@interface IMKUICandidateLayout : NSObject
{
    IMKCandidate *_left;
    IMKCandidate *_middle;
    IMKUITriCandidateLayout *_right;
    BOOL _middleIsCorrection;
    NSArray *_candidates;
}

+ (id)candidateSetFrom:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSArray *candidates; // @synthesize candidates=_candidates;
@property(readonly) BOOL middleIsCorrection; // @synthesize middleIsCorrection=_middleIsCorrection;
@property(readonly) IMKUITriCandidateLayout *rightSet; // @synthesize rightSet=_right;
@property(readonly) IMKCandidate *middleCandidate; // @synthesize middleCandidate=_middle;
@property(readonly) IMKCandidate *leftCandidate; // @synthesize leftCandidate=_left;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLeftCandidate:(id)arg1 middleCandidate:(id)arg2 thatIsCorrection:(BOOL)arg3 rightSet:(id)arg4;
- (id)initWithLeftCandidate:(id)arg1 middleCandidate:(id)arg2 rightSet:(id)arg3;
- (id)initWithLeftCandidate:(id)arg1 middleCandidate:(id)arg2 rightCandidate:(id)arg3;
- (id)init;
- (id)candidateAtIndex:(unsigned long long)arg1;

@end

