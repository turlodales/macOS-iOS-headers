//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback : SFFeedback
{
    SFSearchSuggestion *_suggestion;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SFSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestion:(id)arg1;

@end

