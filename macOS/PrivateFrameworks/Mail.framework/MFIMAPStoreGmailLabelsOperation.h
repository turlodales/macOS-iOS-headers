//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFIMAPStoreOperation.h>

@class NSArray;

@interface MFIMAPStoreGmailLabelsOperation : MFIMAPStoreOperation
{
}

- (id)description;
@property(readonly, copy, nonatomic) NSArray *gmailLabelsToClear;
@property(readonly, copy, nonatomic) NSArray *gmailLabelsToSet;
- (unsigned char)operationType;
- (id)initWithGmailLabelsToSet:(id)arg1 gmailLabelsToClear:(id)arg2 forUIDs:(id)arg3 inMailbox:(id)arg4;

@end

