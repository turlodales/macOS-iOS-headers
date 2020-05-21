//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBScore.h"

@class NSString;

@interface TBQualityScore : NSObject <TBScore>
{
    unsigned long long _score;
    NSString *_typeDescription;
}

+ (id)qualityScoreWithValue:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(nonatomic) unsigned long long score; // @synthesize score=_score;
- (id)initWithValue:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

