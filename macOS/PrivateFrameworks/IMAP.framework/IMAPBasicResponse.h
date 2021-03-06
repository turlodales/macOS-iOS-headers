//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSData, NSString;

@interface IMAPBasicResponse : IMAPResponse
{
    NSData *_userData;
    long long _responseCode;
    id _responseInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id responseInfo; // @synthesize responseInfo=_responseInfo;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) BOOL descriptionIncludesUserString;
- (id)description;
- (id)debugDescription;
@property(readonly, copy, nonatomic) NSString *userString;
@property(copy, nonatomic) NSData *userData;
- (const char *)_responseName;

@end

