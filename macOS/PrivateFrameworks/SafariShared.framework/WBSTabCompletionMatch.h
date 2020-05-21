//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSURLCompletionMatch.h>

@class NSString, NSURL;

@interface WBSTabCompletionMatch : WBSURLCompletionMatch
{
    NSURL *_url;
    NSString *_title;
}

+ (long long)_matchLocationForString:(id)arg1 url:(id)arg2 title:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)userVisibleURLString;
- (id)originalURLString;
- (id)initWithUserTypedString:(id)arg1 url:(id)arg2 title:(id)arg3 forQueryID:(long long)arg4;

@end

