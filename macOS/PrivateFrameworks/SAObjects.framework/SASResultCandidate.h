//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SASRecognition;

@interface SASResultCandidate : SABaseClientBoundCommand
{
}

+ (id)resultCandidateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)resultCandidate;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *resultId;
@property(retain, nonatomic) SASRecognition *recognition;
@property(copy, nonatomic) NSNumber *processedAudioDuration;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

