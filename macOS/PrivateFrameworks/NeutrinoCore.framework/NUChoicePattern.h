//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUChoicePattern : NUPattern
{
    NSArray *_choices;
}

- (void).cxx_destruct;
@property(readonly) NSArray *choices; // @synthesize choices=_choices;
- (BOOL)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (BOOL)isEqualToChoicePattern:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (id)stringRepresentation;
- (id)optimizedPattern;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (id)tokens;
- (id)initWithChoices:(id)arg1;
- (id)init;

@end

