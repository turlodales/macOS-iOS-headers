//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber;

@interface EDAMNotesMetadataList : FATObject
{
    NSNumber *_startIndex;
    NSNumber *_totalNotes;
    NSArray *_notes;
    NSArray *_stoppedWords;
    NSArray *_searchedWords;
    NSNumber *_updateCount;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSArray *searchedWords; // @synthesize searchedWords=_searchedWords;
@property(retain, nonatomic) NSArray *stoppedWords; // @synthesize stoppedWords=_stoppedWords;
@property(retain, nonatomic) NSArray *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSNumber *totalNotes; // @synthesize totalNotes=_totalNotes;
@property(retain, nonatomic) NSNumber *startIndex; // @synthesize startIndex=_startIndex;

@end

