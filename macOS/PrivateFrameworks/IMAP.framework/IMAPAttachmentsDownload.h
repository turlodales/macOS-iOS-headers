//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPCompoundDownload.h>

@protocol IMAPMessage;

@interface IMAPAttachmentsDownload : IMAPCompoundDownload
{
    unsigned int _bytesFetchedForCompletedSubdownlaods;
    id <IMAPMessage> _message;
}

- (void).cxx_destruct;
@property(retain) id <IMAPMessage> message; // @synthesize message=_message;
- (unsigned int)bytesFetched;
- (void)saveCompletedDownloads;
- (id)createCopy;
- (id)initWithIMAPMessage:(id)arg1;

@end

