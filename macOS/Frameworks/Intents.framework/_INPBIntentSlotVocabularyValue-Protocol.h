//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol _INPBIntentSlotVocabularyValue <NSObject>
@property(readonly, nonatomic) BOOL hasPronunciation;
@property(copy, nonatomic) NSString *pronunciation;
@property(readonly, nonatomic) BOOL hasPhrase;
@property(copy, nonatomic) NSString *phrase;
@property(readonly, nonatomic) unsigned long long examplesCount;
@property(copy, nonatomic) NSArray *examples;
- (NSString *)examplesAtIndex:(unsigned long long)arg1;
- (void)addExamples:(NSString *)arg1;
- (void)clearExamples;
@end

