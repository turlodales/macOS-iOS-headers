//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

#import <NotesShared/ICLoggable-Protocol.h>

@class NSString;

@interface CKOperation (IC) <ICLoggable>
- (void)ic_removeAllCompletionBlocks;
- (id)ic_loggingValues;
- (id)ic_loggingIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

