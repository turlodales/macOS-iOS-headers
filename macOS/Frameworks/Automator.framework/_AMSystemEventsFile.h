//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMSystemEventsDiskItem.h>

@class NSString;

@interface _AMSystemEventsFile : _AMSystemEventsDiskItem
{
}

- (id)open;
@property(readonly, copy) NSString *version;
@property(readonly, copy) NSString *typeIdentifier;
@property BOOL stationery;
@property(readonly, copy) NSString *shortVersion;
@property(readonly, copy) NSString *productVersion;
@property(readonly, copy) NSString *kind;
@property(copy) id fileType;
@property(copy) id defaultApplication;
@property(copy) id creatorType;

@end

