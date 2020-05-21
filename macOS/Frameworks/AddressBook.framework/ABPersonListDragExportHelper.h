//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@interface ABPersonListDragExportHelper : NSObject
{
    NSArray *_personIdentifiers;
    NSArray *_names;
    int _options;
    NSArray *_people;
    NSURL *_destinationFolder;
}

@property(copy) NSURL *destinationFolder; // @synthesize destinationFolder=_destinationFolder;
- (BOOL)singleCard;
- (BOOL)shouldUnify;
- (id)fetchContacts;
- (id)people;
- (void)serializePeople;
- (id)filenameFromNames:(id)arg1;
- (id)namesOfIndividualFiles;
- (id)nameOfSingleFile;
- (id)namesOfPendingFiles;
- (void)dealloc;
- (id)initWithPersonIdentifiers:(id)arg1 names:(id)arg2 options:(int)arg3;

@end

