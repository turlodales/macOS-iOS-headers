//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKUICandidateSteppingWindowController.h>

@class IMKUISpeechBalloonMask;

@interface IMKUICandidatePressAndHoldWindowController : IMKUICandidateSteppingWindowController
{
}

- (id)candidateItemForCandidate:(id)arg1 layout:(id)arg2;
- (void)updateLayoutTraits;
- (void)updateWindowFrame;
- (void)updateMaskImageBasedOnPositioning:(id)arg1;
- (struct CGRect)preferredContentFrameForWindowWithSize:(struct CGSize)arg1;
- (struct CGSize)preferredWindowSize;
- (BOOL)isFlipped;
- (id)init;

// Remaining properties
@property(retain, nonatomic) IMKUISpeechBalloonMask *panelMask; // @dynamic panelMask;

@end

