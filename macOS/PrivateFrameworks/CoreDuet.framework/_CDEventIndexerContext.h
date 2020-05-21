//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSObject<OS_os_transaction>, _CDEventIndexerBookmark;

@interface _CDEventIndexerContext : NSObject
{
    _CDEventIndexerBookmark *_bookmark;
    long long _currentVersion;
    unsigned long long _batchSize;
    CDUnknownBlockType _completion;
    NSDate *_indexDate;
    NSObject<OS_os_transaction> *_transaction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) NSDate *indexDate; // @synthesize indexDate=_indexDate;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) long long currentVersion; // @synthesize currentVersion=_currentVersion;
@property(retain, nonatomic) _CDEventIndexerBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (id)description;
- (BOOL)isBookmarkValidInRecoverableThreshold;
- (BOOL)isBookmarkValid;
- (id)init;

@end

