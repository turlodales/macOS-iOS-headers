//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFLibraryMessage.h>

@class MCMessageHeaders, MFIMAPAccount;

@interface MFLibraryIMAPMessage : MFLibraryMessage
{
    MCMessageHeaders *_headers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MFIMAPAccount *account;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)setHeaders:(id)arg1;
- (id)headersFetchIfNotAvailable:(BOOL)arg1;

@end

