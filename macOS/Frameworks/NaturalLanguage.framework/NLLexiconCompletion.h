//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NLLexiconCompletion : NSObject
{
    unsigned int _tokenID;
    double _score;
}

- (double)score;
- (unsigned int)tokenID;
- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;

@end

