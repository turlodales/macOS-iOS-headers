//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPDownload.h>

@class NSError, NSMutableData, NSString;

@interface IMAPSimpleDownload : IMAPDownload
{
    NSMutableData *_mdata;
    BOOL _knownLength;
    unsigned int _bytesFetched;
    BOOL _isComplete;
    unsigned int _expectedLength;
    NSError *_error;
    NSString *_partSectionSpecifier;
    long long _textSectionSpecifier;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isComplete; // @synthesize isComplete=_isComplete;
@property(readonly, nonatomic) unsigned int expectedLength; // @synthesize expectedLength=_expectedLength;
@property long long textSectionSpecifier; // @synthesize textSectionSpecifier=_textSectionSpecifier;
@property(retain) NSString *partSectionSpecifier; // @synthesize partSectionSpecifier=_partSectionSpecifier;
- (void)setError:(id)arg1;
- (id)error;
- (id)data;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (BOOL)handleFetchResult:(id)arg1;
- (unsigned int)bytesFetched;
- (id)description;
- (id)createCopy;
- (id)initWithUid:(unsigned int)arg1;
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 length:(unsigned int)arg4;
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 estimatedLength:(unsigned int)arg4;

@end

