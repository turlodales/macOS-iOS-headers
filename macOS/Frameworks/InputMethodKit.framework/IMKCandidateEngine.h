//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMKCandidateEngine.h"

@interface IMKCandidateEngine : NSObject <IMKCandidateEngine>
{
    double _timeout;
}

- (void)setSyncronousTimeout:(double)arg1;
- (void)handleLearningHint:(int)arg1 forTokenString:(id)arg2 inContext:(id)arg3;
- (id)generateCandidatesFor:(id)arg1;
- (void)generateCandidatesFor:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

