//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol DownloadQueueObserver <NSObject>
- (void)downloadQueueWithIdentifier:(NSString *)arg1 statusChangedForDownloads:(NSArray *)arg2;
- (void)downloadQueueWithIdentifier:(NSString *)arg1 addedDownloads:(NSArray *)arg2;
@end

