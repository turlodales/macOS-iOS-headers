//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/NSObject-Protocol.h>

@class IMKCandidate;
@protocol IMKCandidateMenu;

@protocol IMKCandidateMenuDelegate <NSObject>
- (void)candidateMenuDidFinishInteracting:(id <IMKCandidateMenu>)arg1;
- (void)candidateMenu:(id <IMKCandidateMenu>)arg1 didSelectCandidate:(IMKCandidate *)arg2;
- (void)candidateMenu:(id <IMKCandidateMenu>)arg1 didChangeFocusTo:(IMKCandidate *)arg2;
@end

