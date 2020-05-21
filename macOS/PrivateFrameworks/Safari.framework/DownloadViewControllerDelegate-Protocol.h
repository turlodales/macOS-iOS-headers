//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DownloadProgressEntry, DownloadViewController, NSArray;

@protocol DownloadViewControllerDelegate <NSObject>
- (void)downloadViewController:(DownloadViewController *)arg1 didAcceptURLs:(NSArray *)arg2;
- (void)downloadViewControllerDidRemoveIdleEntries:(DownloadViewController *)arg1;
- (void)downloadViewController:(DownloadViewController *)arg1 didUndoRemovingEntry:(DownloadProgressEntry *)arg2 atIndex:(unsigned long long)arg3;
- (void)downloadViewController:(DownloadViewController *)arg1 didRemoveEntries:(NSArray *)arg2;
@end

