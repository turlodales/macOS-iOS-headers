//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSharedKeySet;

@interface PASScoreInterpreter : NSObject
{
    NSDictionary *_varPrograms;
    NSSharedKeySet *_scoreInputSharedKeySet;
}

+ (id)scoreInterpreterParseRootFromAsset:(id)arg1;
- (void).cxx_destruct;
- (double)_evalVariable:(id)arg1 withCtx:(id)arg2;
- (void)_compileRoot:(id)arg1;
- (id)initWithParseRoot:(id)arg1 scoreInputSharedKeySet:(id)arg2;
- (id)initWithParseRoot:(id)arg1;
- (id)evaluateWithInputScoreDict:(id)arg1;
- (id)evaluateWithInputScores:(id)arg1;
- (id)init;

@end

