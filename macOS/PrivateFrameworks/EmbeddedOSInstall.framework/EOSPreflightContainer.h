//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EOSRestoreBundle, NSData, NSDate, NSString, NSURL;

@interface EOSPreflightContainer : NSObject
{
    NSURL *_url;
    EOSRestoreBundle *_restoreBundle;
    NSString *_tag;
    NSURL *_fdrDataURL;
    NSData *_apNonce;
    NSDate *_datePreflighted;
}

- (void).cxx_destruct;
@property(retain) NSDate *datePreflighted; // @synthesize datePreflighted=_datePreflighted;
@property(retain) NSData *apNonce; // @synthesize apNonce=_apNonce;
@property(retain) NSURL *fdrDataURL; // @synthesize fdrDataURL=_fdrDataURL;
@property(retain) NSString *tag; // @synthesize tag=_tag;
@property(retain) EOSRestoreBundle *restoreBundle; // @synthesize restoreBundle=_restoreBundle;
@property(retain) NSURL *url; // @synthesize url=_url;
- (id)description;

@end

