//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFSearchSuggestion.h"

@class NSString;

@interface PARSearchSuggestion : SFSearchSuggestion
{
    NSString *_fbr;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 type:(unsigned long long)arg5;
- (id)initWithSuggestion:(id)arg1 query:(id)arg2 score:(double)arg3 fbr:(id)arg4;
- (id)initWithIdentifier:(id)arg1 suggestion:(id)arg2 query:(id)arg3 score:(double)arg4 fbr:(id)arg5;

@end

