//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ITLibMediaItemData : NSObject
{
    BOOL _downloadable;
    NSURL *_URL;
    NSURL *_securityScopedURL;
    unsigned long long _playlistCount;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL downloadable; // @synthesize downloadable=_downloadable;
@property(nonatomic) unsigned long long playlistCount; // @synthesize playlistCount=_playlistCount;
@property(retain, nonatomic) NSURL *securityScopedURL; // @synthesize securityScopedURL=_securityScopedURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)init;

@end

