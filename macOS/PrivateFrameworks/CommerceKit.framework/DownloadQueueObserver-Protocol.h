//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommerceKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol DownloadQueueObserver <NSObject>
- (void)downloadQueueWithIdentifier:(NSString *)arg1 statusChangedForDownloads:(NSArray *)arg2;
- (void)downloadQueueWithIdentifier:(NSString *)arg1 addedDownloads:(NSArray *)arg2;
@end

