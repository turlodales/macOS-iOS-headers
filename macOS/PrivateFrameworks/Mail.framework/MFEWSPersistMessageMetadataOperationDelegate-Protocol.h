//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/NSObject-Protocol.h>

@class MFEWSMailboxItemsBatch, MFEWSPersistMessageMetadataOperation;

@protocol MFEWSPersistMessageMetadataOperationDelegate <NSObject>
- (void)persistMessageMetadataOperation:(MFEWSPersistMessageMetadataOperation *)arg1 didPersistBatch:(MFEWSMailboxItemsBatch *)arg2;
@end

