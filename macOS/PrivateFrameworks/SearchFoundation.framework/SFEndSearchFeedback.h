//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFEndSearchFeedback : SFFeedback
{
    BOOL _isCanceled;
    NSString *_uuid;
    unsigned long long _cancelSearchEvent;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long cancelSearchEvent; // @synthesize cancelSearchEvent=_cancelSearchEvent;
@property(nonatomic) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1;

@end

