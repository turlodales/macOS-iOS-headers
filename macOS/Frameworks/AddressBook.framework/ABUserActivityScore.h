//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPerson;

@interface ABUserActivityScore : NSObject
{
    unsigned long long _score;
    ABPerson *_person;
}

+ (id)matchWithPerson:(id)arg1 score:(unsigned long long)arg2;
@property unsigned long long score; // @synthesize score=_score;
@property(retain) ABPerson *person; // @synthesize person=_person;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 score:(unsigned long long)arg2;

@end

