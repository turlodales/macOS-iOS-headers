//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class CRDocument, CRVectorTimestamp;
@protocol CRDataType;

@protocol CRDataType <NSObject>
- (void)setDocument:(CRDocument *)arg1;
- (void)walkGraph:(void (^)(id))arg1;
- (id)tombstone;
- (void)realizeLocalChangesIn:(CRDocument *)arg1;
- (id <CRDataType>)deltaSince:(CRVectorTimestamp *)arg1 in:(CRDocument *)arg2;
- (void)mergeWith:(id <CRDataType>)arg1;
@end

