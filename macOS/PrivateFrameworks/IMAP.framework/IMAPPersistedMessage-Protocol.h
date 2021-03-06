//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPMessage-Protocol.h>
#import <IMAP/MCChanging-Protocol.h>

@class NSData, NSString;

@protocol IMAPPersistedMessage <IMAPMessage, MCChanging>
@property(readonly, nonatomic) long long libraryID;
@property(copy) NSString *remoteID;
- (void)appendMimeData:(NSData *)arg1 partNumber:(NSString *)arg2;
- (void)setData:(NSData *)arg1 isPartial:(BOOL)arg2;
@end

